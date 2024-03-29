#include <iostream>
#include <vector>

using namespace std;
const vector<int> *

fibon_seq(int size)
{
    const int max_size = 1024;
    static vector<int> elems;

    if ((size < 0) || (size > max_size))
    {
        cerr << "fibon_seq(): Oops: invalid size:"
             << size << " -- cann't fulfill request.\n";
        return 0;
    }

    for (int ix = elems.size(); ix < size; ix++)
    {
        if (ix == 0 || ix == 1)
            elems.push_back(1);
        else
            elems.push_back(elems[ix - 1] + elems[ix - 2]);
    }
    return &elems;
}

int main()
{
}
