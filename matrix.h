
#ifndef __MATRIX_LIBRARY__
#define __MATRIX_LIBRARY__


class matrix{
  public:
    matrix(int row, int col);
    ~matrix();

    int* dimension(void) const;
    int get_size(void) const;
    int get_row(void) const;

    void print(void);

    double operator()(int row, int col) const;
    double &operator()(int row, int col);

  private:
    double *data;
    int *shape;
    int mat_size;

};

#endif
