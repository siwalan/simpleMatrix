#include <iostream>

#include "matrix.h"

int main() {
  std::cout << "Simple Matrix Lib!\n";

  matrix A(2,2);
  
  int a_size = A.get_size();
  std::cout << "Matrix Size " << a_size;
  std::cout << "\nProgram Termination \n";

}