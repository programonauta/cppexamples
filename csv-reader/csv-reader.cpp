// 
// Read file csv
//

#include <iostream>
#include <fstream>
using namespace std;

ifstream infile;

int main(int argc, char* argv[]) 
{
  string input = "input.csv";
  string value;
  int lineNo = 0;
  int fieldCount = 0;
  size_t lfFound;

  infile.open(input.c_str());
  if (!infile)
  {
    cout << "Unable to open input."<< endl;
    return 1;
  }

  while (infile.good())
  {
    getline (infile, value, ','); // read a string until next comma
    if ((lfFound = value.find("\n"))!=string::npos) // found a line feed
    {
      cout << value.substr(0, lfFound) << " Line " << ++lineNo << ": " << ++fieldCount << " field(s)\n";
      fieldCount = 1;
      cout << value.substr(lfFound + 1) << ", "; 
    }
    else
    {
        cout << value << ", "; 
        fieldCount++;
    }
  }
}
