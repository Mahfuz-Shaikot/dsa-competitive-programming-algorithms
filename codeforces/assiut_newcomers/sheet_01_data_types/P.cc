#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;

    a /= 1000;

    if (a % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else if (a % 2 != 0)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "input_error" << endl;
    }

    return 0;
}
