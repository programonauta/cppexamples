//
// Read file line by line
// with fields separated by tab
//
//
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

ifstream infile;
ofstream outfile;


int main(int argc, char* argv[])
{
  string input = "input.txt";
  string output = "output.txt";
  double x, y;

  outfile.open(output.c_str());

  // Read in input.
  infile.open(input.c_str());
  if (!infile)
  {
    cout << "Unable to open input."<< endl;
  }
  while(!infile.eof())		
  {
    infile >> x >> y;
    outfile << x << ", " << y << endl;
  }

  // Close input file
  infile.close();


} 
