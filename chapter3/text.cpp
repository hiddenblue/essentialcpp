#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>

using namespace std;
// very basic transverse

int *find(vector<int> &vec, int value)
{
    for (int ix = 0; ix < vec.size(); ix++)
    {
        if (vec[ix] == value)
            // 这个逻辑是，容器里面有这个值，就返回这个值。
            return &vec[ix];
    }
    return 0;
}

// generic type
template <typename elemType>
elemType *find(const vector<elemType> &vec, const elemType &value)
{
    for (int ix = 0; ix < vec.size(); ix++)
    {
        if (vec[ix] == value)
            return &vec[ix];
    }
    return 0;
}

// iterator

template <typename elemType>
void display(const vector<elemType> &vec, ostream &os)
{
    typename ::vector<elemType>::const_iterator iter = vec.begin();
    typename ::vector<elemType>::const_iterator end_it = vec.end();

    for (; iter != end_it; iter++)
        os << *iter << ' ';
    os << endl;
}

//

template <typename IteratorType, typename elemType>
IteratorType find(IteratorType first, IteratorType last, const elemType &value)
{
    for (; first != last; first++)
    {
        if (value == *first)
            return first;
    }
    return last;
}

int main(int argc, char **argv)
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    for (int ix = 0; ix < vec.size(); ix++)
    {
        cout << vec[ix] << ' ';
    }
    cout << endl;
    display(vec, cout);

    // 初始化生成空的容器
    list<string> slist;
    vector<int> ivec;

    // 产生特定大小的容器，每个元素都以其默认值作为初值
    list<int> ilist(1024);
    vector<string> svec(32);

    // 产生特定大小的容器，并为每个元素指定初始值
    vector<int> ivec(10, -1);
    list<string> slist(16, "unassigned");

    // 通过一对来自数组的iterator产生容器，标定了容器的元素的范围

    int ia[8] = {1, 1, 2, 3, 5, 8, 13, 21};

    vector<int> fib(ia, ia + 8);
    // 根据已有的容器产生新容器，复制其中的元素
    list<string> slit;

    list<string> slist2(slist);
    return 0;
}