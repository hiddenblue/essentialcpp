#include <string>
#include <vector>

class Triangular
{
public:
    Triangular(); // 默认的contructor
    Triangular(int len);
    Triangular(int len, int beg_pos);
    Triangular &copy(const Triangular &rhs);

private:
    int _length, _beg_pos, _next;
};

Triangular::Triangular()
{
    // default constructor
    _length = 1;
    _beg_pos = 1;
    _next = 0;
}

Triangular::Triangular(int len, int beg_pos)
{
    _length = len > 0 ? len : 1;
    _beg_pos = beg_pos > 0 ? beg_pos : 1;
    _next = _beg_pos - 1;
}

Triangular &Triangular::copy(const Triangular &rhs)
{
    if (this != &rhs)
    {
        _length = rhs._length;
        _beg_pos = rhs._beg_pos;
        _next = rhs._next;
    }
    return *this;
}

Triangular
t5();                 // 错误的声明
Triangular t1(10, 3); // 正确的声明，调用两个参数的构造函数
Triangular t3 = 5;    // 正确的声明，带有一个参数的构造
Triangular t4;        // 最简单的声明，调用一个默认的无参数构造函数

class Matrix
{
public:
    Matrix(int row, int col)
        : _row(row), _col(col)
    {
        _pmat = new double[row * col];
    }
    ~Matrix()
    {
        delete[] _pmat;
    }

private:
    int _row, _col;
    double *_pmat;
};