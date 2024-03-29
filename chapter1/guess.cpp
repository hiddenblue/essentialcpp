#include <iostream>

using namespace std;

int main()
{
    bool next_seq = true;
    bool go_for_it = true;
    bool got_it = false;

    int num_tries = 0;
    int num_right = 0;

    int max_tries = 3;
    int tries_cnt = 0;

    while ((next_seq == true) && (num_tries <= max_tries))
    {
        int usr_rsp;
        while ((got_it == false) && (go_for_it == true))
        {
            int usr_guess;
            cin >> usr_guess;
            num_tries++;

            if (usr_guess == next_elem)
            {
                got_it = true;
                num_right++;
            }
            else
            {
                if (usr_rsp == 'N' || usr_rsp == 'n')
                    go_for_it = false;
            }
        }
    }

    cout << "Want to try another sequence? (Y/N)";
    char try_again;
    cin >> try_again;

    if (try_again == 'N' || try_again == 'n')
        next_seq = false;
}