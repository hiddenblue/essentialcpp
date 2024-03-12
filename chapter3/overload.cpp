#include <iostream>
#include <string>
#include <vector>
#include "overload.h"

using namespace std;
int main(int argc, char **argv)
{
    return 0;
}

bool is_size_ok(int size)
{
    const int max_size = 1024;
    const string msg("Requested size is not supported");
    vector<int> ivec;
    if (size < 0 || size > max_size)
    {
        display_message(msg, ivec);
        return false;
    }
    return true;
}

template <typename elemType>
void display_message(const string &msg, const vector<elemType> &vec)
{
    cout << msg << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        elemType t = vec[i];
        cout << t << ' ';
    }
}