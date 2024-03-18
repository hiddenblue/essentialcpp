#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Triangular {
public:
  Triangular(); // 默认的contructor
  Triangular(int len);
  Triangular(int len, int beg_pos);
  Triangular &copy(const Triangular &rhs);
  static bool is_elem(int value);
  static void gen_elems_to_value(int value);

private:
  int _length, _beg_pos, _next;
  static vector<int> _elems;
  static const int _max_elems = 1024;
};

Triangular::Triangular() {
  // default constructor
  _length = 1;
  _beg_pos = 1;
  _next = 0;
}

Triangular::Triangular(int len, int beg_pos) {
  _length = len > 0 ? len : 1;
  _beg_pos = beg_pos > 0 ? beg_pos : 1;
  _next = _beg_pos - 1;
}

Triangular &Triangular::copy(const Triangular &rhs) {
  if (this != &rhs) {
    _length = rhs._length;
    _beg_pos = rhs._beg_pos;
    _next = rhs._next;
  }
  return *this;
}

Triangular t5();      // 错误的声明
Triangular t1(10, 3); // 正确的声明，调用两个参数的构造函数
Triangular t3 = 5;    // 正确的声明，带有一个参数的构造
Triangular t4; // 最简单的声明，调用一个默认的无参数构造函数

class Matrix {
public:
  Matrix(int row, int col) : _row(row), _col(col) {
    _pmat = new double[row * col];
  }
  ~Matrix() { delete[] _pmat; }

private:
  int _row, _col;
  double *_pmat;
};

// copy constructor

Matrix::Matrix(const Matrix &rhs) : _row(rhs._row), _col(rhs._col) {
  int elem_cnt = _row * _col;
  _pmat = new double[elem_cnt];

  for (int ix = 0; ix < elem_cnt; ix++) {
    _pmat[ix] = rhs._pmat[ix];
  }
}

Matrix &Matrix::operator=(const Matrix &rhs) {
  if (this != &rhs) {
    _row = rhs._row, _col = rhs._col;
    int elem_cnt = _row * _col;
    delete[] _pmat;
    _pmat = new double[elem_cnt];
    for (int ix = 0; ix < elem_cnt; ix++) {
      _pmat[ix] = rhs._pmat[ix];
    }
  }
  return *this;
}

bool Triangular::is_elem(int value) {
  if (!_elems.size() || _elems[_elems.size() - 1] < value)
    gen_elems_to_value(value);

  vector<int>::iterator found_it;
  vector<int>::iterator end_it = _elems.end();

  found_it = find(_elems.begin(), end_it, value);
  return found_it != end_it;
}

void Triangular::gen_elems_to_value(int value) {
  int ix = _elems.size();
  if (!ix) {
    _elems.push_back(1);
    ix = 1;
  }

  while (_elems[ix - 1] < value && ix < _max_elems) {
    ix++;
    _elems.push_back(ix * (ix + 1) / 2);
  }
  if (ix == _max_elems)
    cerr << "Triangular Sequence: oops: value too large " << value
         << "  -- exceeds max size of " << _max_elems << endl;
}
