#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("seq_data.txt");

    if (!infile)
        cerr << "Oops! xxxx";
    else
    {
    }

    fstream iofile("seq_data.txt", ios_base::in | ios_base::app);
    if (!iofile)
        cerr << " " else
        {

            iofile.seekg(0)
        }
}
