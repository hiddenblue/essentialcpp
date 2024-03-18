#include <exception>
#include <iostream>
#include <vector>

using namespace std;

class Triangular_iterator : public execution {
public:
  Triangular_iterator(int index, int max) : _index(index), _max(max) {}
  int index() { return _index; }
  int max() { return _max; }
  // override
  const char *what() const;

private:
  void check_integrity() const;
  int _index;
  int _max;
};

class iterator_overflow {
public:
  iterator_overflow(int index, int max) : _index(index), _max(max) {}

  int index() { return _index; }
  int max() { return _max; }
  void what_happened(ostream &os = cerr) {
    os << "Internal error: current index " << _index
       << "excess maximum bound: " << _max;
  }

private:
  int _index;
  int _max;
};

inline void Triangular_iterator::check_integrity() {

  if (_index >= Triangular_iterator::_max_elem)
    throw iterator_overflow(_index, Triangular_iterator::_max_elem);

  if (_index >= Triangular_iterator::_elems.size())
    Triangular_iterator::gen_elements(_index + 1);
}
