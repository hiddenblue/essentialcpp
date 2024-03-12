#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// int max(const vector<int> &vec);

int main(int argc, char **argv)
{
    // a vector with int content element
    int iarray[] = {1, 2, 3, 4, 5, 6};
    vector<int> vec(iarray, iarray + 6);
    cout << max(vec) << endl;
}

int max(const vector<int> &vec)
{
    int max = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > max)
            max = vec[i];
    }
    return max;
}