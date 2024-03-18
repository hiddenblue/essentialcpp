#include <iostream>
#include <string>

using namespace std;

extern void log_message(const char *);
extern string err_messages[];
extern ostream log_file;

bool some_function() {
  bool status = true;

  catch (int errno) {
    log_message(err_messages[errno]);
    status = false;
  }
  catch (const char *str) {
    log_message(str);
    status = false;
  }
  catch (iterator_overflow &iof) {
    iof.what_happened(log_file);
    status = false;
  }
  return;
}