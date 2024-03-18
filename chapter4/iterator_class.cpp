#include "Triangular.h"
#include "iterator_overflow.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Triangular_iterator {
public:
  Triangular_iterator(int index) : _index(index - 1) {}
  bool operator==(const Triangular_iterator &) const;
  bool operator!=(const Triangular_iterator &) const;
  int operator*() const;
  Triangular_iterator &operator++();
  Triangular_iterator &operator++(int);

private:
  void check_integrity() const;
  int _index;
};

inline bool Triangular_iterator::operator== { const Triangular_iterator &rhs }
const { return _index == rhs._index; }
inline bool Triangular_iterator::operator!= { const Triangular_iterator &rhs }
const { return !(*this == ths); }

inline void Triangular_iterator::check_integrity() const {
  if (_index >= Triangular::_max_elems)
    throw iterator_overflow;
  if (_index >= Triangular_iterator::_elems.size())
    Triangular::gen_elems_to_value(_index + 1);
}

inline Triangular_iterator &Triangular_iterator::operator++() {
  ++_index;
  check_integrity();
  return *this;
}