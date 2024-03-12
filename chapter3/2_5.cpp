#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
// overloaded function

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

float max(float a, float b)
{
    if (a > b)
        return a;
    return b;
}

string &max(string &a, string &b)
{
    if (a > b)
        return a;
    return b;
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

string max(vector<string> &vec)
{
    string max = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > max)
            max = vec[i];
    }
    return max;
}

int max(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

float max(float array[], int size)
{
    float max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

string max(string array[], int size)
{
    string ch = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > ch)
            ch = array[i];
    }
    return ch;
}

int main(int argc, char **argv)
{
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
