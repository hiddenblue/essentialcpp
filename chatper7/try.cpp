#include "Triangular.h"
#include <string>
#include <vector>

using namespace std;

extern void log_message(const char *);
extern string err_messages[];
extern ostream log_file;

bool has_elem(Triangular_iterator first, Triangular_iterator last, int elem) {
  bool status = true;

  try {
    while (first != last) {
      if (*first == elem)
        return status;
      ++first;
    }
  }

  catch (iterator_overflow &iof) {
    log_message(iof.what_happened());
    log_message("check if iterators address same container");
  }

  status = false;
  return status;
}
