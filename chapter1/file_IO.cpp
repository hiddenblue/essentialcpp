#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ofstream outfile("seq_data.txt", ios_base::app);
    ofstream outfile("seq_data.txt");

    if (!outfile)
        cerr << "Oops! Unable to save session data!\n";
    else
    {
        outfile << usr_name << ' '
                << num_tries << ' '
                << num_right << endl;
    }
}
