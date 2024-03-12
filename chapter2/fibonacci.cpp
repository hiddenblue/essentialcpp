#include <iostream>
#include <cstdlib>

using namespace std;

bool fibon_elem(int pos, int &elem);

int main()
{

    int pos, elem;
    cout << "Please enter a position: ";
    cin >> pos;

    if (fibon_elem(pos, elem))
        cout << "element # " << pos
             << " is " << elem << endl;
    else
    {
        cout << "Sorry.  Count not calculate element # "
             << pos << endl;
    }

    return 0;
}

bool fibon_elem(int pos, int &elem)
{
    // bool返回值只是意味着用户输入的值是否合理
    // 实际返回是靠指针
    if (pos <= 0 || pos > 1024)
    {
        elem = 0;
        return false;
    }

    elem = 1;

    int n_2 = 1, n_1 = 1;

    for (int ix = 3; ix <= pos; ix++)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }
    return true;
}