#include "LibMat.h"
#include <string>
#include <vector>

int main(int argc, char **argv) {
  cout << "\n"
       << "creating a libmat object to print()\n";
  LibMat libmat;
  print(libmat);

  cout << "\n";

  cout << "\n"
       << "Creating a Book object to print()\n";
  Book b("The castle", "Franz Kafka");
  print(b);

  cout << "\n";

  AudioBook ab("Mason and Dixon", "Thomas Pynchon", "Edwin Leonard");

  cout << "The title is " << ab.title() << '\n'
       << "The author is " << ab.author() << '\n'
       << "The narrator is " << ab.narrator() << '\n';
}