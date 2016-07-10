//
// This program shows an example to create multidimensional arrays in C++
//
// Especificaly in this example, you can see a 2D array.
//

#include <iostream>

int main() {

  // Defining dimensions
  int N = 3;
  int M = 3;

  // Creating the matrix

  double** mtrx = new double*[N];
  for (int i = 0; i < N; ++i)
    mtrx[i] = new double[M];

  // Fill the matrix
  
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < M; ++j)
      mtrx[i][j] = (double)(i) + ((double)(j)/100);

  // Display the result

  std::cout << '\n' << "---------------------------" << '\n';
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j)
      std::cout << mtrx[i][j] << '\t';
    std::cout << '\n';
  }

  // Free memory
  for (int i = 0; i < N; ++i)
    delete [] mtrx[i];
  
  delete [] mtrx;

  return 0;
}
