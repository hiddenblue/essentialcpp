#include <iostream>
#include <vector>

using namespace std;
void display_message(const string &msg, const vector<elemType> &vec);

int main()
{
    vector<int> ivec;
    string msg;
    display_message(msg, ivec);
}

template <typename elemType>
void display_message(const string &msg, const vector<elemType> &vec)
{
    cout << msg;
    for (int ix = 0; ix < vec.size(); ix++)
    {
        elemType t = vec[ix] cout << t << ' ';
    }
}