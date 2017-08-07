
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//
// Function to parse a CSV file using Finite Automaton
// return 1 if found a valid CSV line
// return 0 if the line is invalid
// Return the fields in the vector v
//
int getCSVLine(ifstream &inCSVFile, vector<string> &v);

