#include <iostream>
using namespace std;

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