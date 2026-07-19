#include <iostream>
using namespace std;

int main()
{

    int x, pwd;
    pwd = 1999;

    while (cin >> x)
    {

        if (x == pwd)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}