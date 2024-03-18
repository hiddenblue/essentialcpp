#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// overloaded function

int max(int a, int b) { return a > b ? a : b; }

float max(float a, float b) { return a > b ? a : b; }

string &max(string &a, string &b) { return a > b ? a : b; }

int max(const vector<int> &vec) { return *max_element(vec.begin(), vec.end()); }

string max(vector<string> &vec)

{
  return *max_element(vec.begin(), vec.end());
}

int max(int array[], int size) { return *max_element(array, array + size); }

float max(float array[], int size) { return *max_element(array, array + size); }

string max(string array[], int size) {
  return *max_element(array, array + size);
}

int main(int argc, char **argv) {
  // two int
  int a = 3, b = 2;
  cout << max(a, b) << endl;

  // two float;
  float c = 1.4, d = 1.5;
  cout << max(c, d) << endl;

  // two string
  string msg1 = "hello", msg2 = "world";
  cout << max(msg1, msg2) << endl;

  // a vector with int content element
  int iarray[] = {1, 2, 3, 4, 5, 6};
  vector<int> vec(iarray, iarray + 6);
  cout << max(vec) << endl;

  // string vector
  vector<string> vec2{"ab", "cd", "ef"};
  cout << max(vec2) << endl;

  // // int array
  cout << max(iarray, 6) << endl;

  // float array
  float farray[] = {1.4, 1.5, 1.6};
  cout << max(farray, 3) << endl;

  // char array
  string carray[] = {"12", "34", "567"};
  cout << max(carray, 3) << endl;
  return 0;
}
