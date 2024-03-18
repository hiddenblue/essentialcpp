#include <deque>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    deque<int> a_line;
    int ival;

    while (cin >> ival)
    {
        a_line.push_back(ival);

        int curr_value = a_line.front();

        a_line.pop_front();
    }
}