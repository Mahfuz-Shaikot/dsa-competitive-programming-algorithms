#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        if (i % 2 == 0 && i != 0)
        {
            cout << i << endl;
        }
    }
    if (n == 0 || n == 1)
    {
        cout << "-1" << endl;
    }

    return 0;
}