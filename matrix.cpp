#include <iostream>
#include <cmath>

#include "matrix.h"

matrix::matrix(int row, int col)
{
  int mat_size = row*col;
  int shape[2] =  {row, col};
  data = new double[mat_size];
}

matrix::~matrix()
{
  delete [] data;
}

int*
matrix::dimension(void) const
{
  return shape;
}

int
matrix::get_size(void) const
{
  return mat_size;
}

int
matrix::get_row(void) const
{
  return shape[0];
}
void 
matrix::print(void)
{
  for (int i=0; i<shape[0]*shape[1]; i++)
    std::cerr << " " << data[i];
  std::cerr << "\n";
}

double 
matrix::operator()(int row, int col) const
{
  int loc = row*col - 1;
  // int loc = row*shape[0] + col -1;
  return data[loc];
}

double &
matrix::operator()(int row, int col)
{
  int loc = row*col - 1;
  // int loc = row*shape[0] + col -1;
  return data[loc];
}
