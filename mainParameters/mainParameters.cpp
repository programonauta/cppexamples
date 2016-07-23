//
// Simple file 
//
#include <iostream>
using namespace std;

char* getCmdOption(char ** begin, char ** end, const std::string & option)
{
  char ** itr = std::find(begin, end, option);
  if (itr != end && ++itr != end)
  {
    return *itr;
  }
  return 0;
}

bool cmdOptionExists(char** begin, char** end, const std::string& option)
{
  return std::find(begin, end, option) != end;
}

int main(int argc, char * argv[])
{
  if(cmdOptionExists(argv, argv+argc, "-h"))
  {
    // Do stuff
    cout << "parameter -h found" << endl;
  }

  if (cmdOptionExists(argv, argv+argc, "-f"))
  {
    char * filename = getCmdOption(argv, argv + argc, "-f");
    if (filename)
    {
      // Do interesting things
      // ...
      cout << "File name " << filename << endl;
    }
    else
      cout << "Please inform file name " << endl;
  }
  
  if (cmdOptionExists(argv, argv + argc, "-i"))
  {
    int intParam = atoi(getCmdOption(argv, argv + argc, "-i"));

    cout << "Integer (-i) parameter: " << intParam << endl;
  }
  return 0;
}
