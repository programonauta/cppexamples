// 
// Read file csv
//

#include <iostream>
#include <fstream>
using namespace std;

ifstream infile;

bool isDouble(const char *str)
{
  char* endptr = 0;
  strtod(str, &endptr);

  return !((endptr == str));
  //return !((*endptr != '\0' || endptr == str));
}

int main(int argc, char* argv[]) 
{
  string input = "input.csv";
  string value;
  int lineNo = 0;
  int fieldCount = 0;
  size_t lfFound;
  double dataVar = 0.;

  infile.open(input.c_str());
  if (!infile)
  {
    cout << "Unable to open input."<< endl;
    return 1;
  }

  char* endptr = 0;
  string abc = "    -od32.234bcd   ";
  
  if (isDouble(abc.c_str()))
    cout << "Valid Double\n";
  else
    cout << "Invalid Double\n";

  dataVar = stod(abc);

  cout << dataVar << "*** Double\n";

  if(*endptr != '\0' || endptr == abc)
    cout << "Invalid string\n";

  cout << dataVar / 10 << "\n\n\n*************\n\n";

  while (infile.good())
  {
    getline (infile, value, ','); // read a string until next comma
    if ((lfFound = value.find("\n"))!=string::npos) // found a line feed
    {
      cout << value.substr(0, lfFound) << " Line " << ++lineNo << ": " << ++fieldCount << " field(s)\n";
      fieldCount = 1;
      //cout << value.substr(lfFound + 1) << "\n\n\n**********\n\n";
      //dataVar = stod(value.substr(0, lfFound));
      cout << value.substr(lfFound + 1) << ", "; 
    }
    else
    {
        dataVar = stod(value);
        cout << "double: " << dataVar/10 << ", "; 
        fieldCount++;
    }
  }
}
