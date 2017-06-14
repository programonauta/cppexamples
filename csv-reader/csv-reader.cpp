// 
// Read file csv
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream infile;

//
// Function to parse a CSV file using Finite Automaton
// return 1 if found a valid CSV line
// return 0 if the line is invalid
// Return the fields in the vector v
//
int getCSVLine(ifstream &inCSVFile, vector<string> &v)
{
// Define Automaton states

#define AUT_START 0
#define AUT_VALID_CHR 1
#define AUT_QUOTATION 2
#define AUT_BACK_SLASH 3
#define AUT_END_QUOTATION 4
#define AUT_END 5
#define AUT_ERROR 6

  string field; 
  char c = 0;
  char currentState = AUT_START; // identify the current automaton state
  string valids = "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*():;/<>.[]{}|\\-_+= ";

  while (inCSVFile && currentState != AUT_ERROR && currentState != AUT_END)    // loop until ends or find an erro on automaton
  {

    inCSVFile.get(c);

    switch (currentState)
    {
      case AUT_START: // First state 
        if (strchr(valids.c_str(), c)) // found a valid character go to the next automaton
          currentState = AUT_VALID_CHR;
        else if (c == '"') // found a quotation mark
          currentState = AUT_QUOTATION;
        else
          currentState = AUT_ERROR;
        field += c; // append a new character into field
        break;
      case AUT_VALID_CHR:
        if (c == '\n' || !inCSVFile || c == ',') // Delimiter, end of line or End of File
        {
          v.push_back(field);
          field = "";
          currentState = ((c == ',') ? AUT_START : AUT_END);
          break;
        }
        else if (strchr(valids.c_str(), c))
          currentState = AUT_VALID_CHR;
        else
          currentState = AUT_ERROR;
        field += c;
        break;
      case AUT_QUOTATION:
        if (c == '\\')
          currentState = AUT_BACK_SLASH;
        else if (strchr(valids.c_str(), c))
          currentState = AUT_QUOTATION;
        else if (c == '"')
          currentState = AUT_END_QUOTATION;
        else
          currentState = AUT_ERROR;
        if (c != '\\')
          field += c;
        break;
      case AUT_END_QUOTATION:
        if (c == '\n' || !inCSVFile || c == ',') // Delimiter, end of line or End of File
        {
          v.push_back(field);
          field = "";
          currentState = ((c == ',') ? AUT_START : AUT_END);
          break;
        }
        else 
          currentState = AUT_ERROR;
        break;
      case AUT_BACK_SLASH:
        field += c;  // append the character without verification
        currentState = AUT_QUOTATION;
        break;
    }

  }

  if (currentState == AUT_END) // Verify if next character is the end of file
  {
    inCSVFile.peek();

    if (inCSVFile.eof())
      inCSVFile.get(c);
  }

  return (currentState == AUT_END);
}

bool isDouble(const char *str)
{
  char* endptr = 0;
  strtod(str, &endptr);

  return !((endptr == str));
}

int main(int argc, char* argv[]) 
{
  string input = "input.csv";
  string value;
  int lineNo = 0;
  int fieldCount = 0;
  size_t lfFound;
  double dataVar = 0.;
  vector<string> lineCSV;

  infile.open(input.c_str());
  if (!infile)
  {
    cout << "Unable to open input."<< endl;
    return 1;
  }

  int r = 0;

  while (infile)
  {
    r = getCSVLine(infile, lineCSV);
    cout << "Line number: " << ++lineNo << " Number of fields: " << lineCSV.size() << "\n";
    for (int i = 0; i < lineCSV.size(); i++)
    {
      cout << "   " << lineCSV[i] << " (is ";
      if (!isDouble(lineCSV[i].c_str()))
          cout << "not ";
      cout << "double) ,";
      if (isDouble(lineCSV[i].c_str())) cout << "|" << stod(lineCSV[i]) << "|, ";
    }
      cout << "\n";
    if (!r)
    {
      cout << "Error - line " << lineNo << "\n\n";
      return 0;
    }
    lineCSV.resize(0);
    cout << "\n";
  }

  cout << "Everything OK!\n**==**==**==**==**==**==**==\n\n";

}
