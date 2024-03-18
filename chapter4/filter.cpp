#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// pred函数指针
vector<int> filter(const vector<int> &ivec, int filter_value, bool (*pred)(int, int))
{
    vector<int> rvec;
    for (int ix = 0; ix < ivec.size(); ix++)
    {
        if (pred(ivec[ix], filter_value))
            rvec.push_back(ivec[ix]);
    }
}

bool less_than(int v1, int v2)
{
    return v1 < v2 ? true : false;
}

bool great_than(int v1, int v2)
{
    return v1 > v2 ? true : false;
}

int main(int argc, char **argv)
{
    vector<int> lt_10 = filter(big_vec, value, less_than)

        return;
}

int count_occurs(const vector<int> &ivec, int val)
{
    vector<int>::const_iterator iter = ivec.begin();
    int occurs_count = 0;
    while ((iter = find(iter, vec.end(), val)) != ivec.end())
    {
        ++occurs_count;
        ++iter;
    }
    return occurs_count;
}
