#include <bits/stdc++.h>
using namespace std;

int main()
{

    char n;
    cin >> n;

    int temp = int(n);

    if (48 <= temp && temp <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (65 <= temp && temp <= 92)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (97 <= temp && temp <= 124)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else
    {
        cout << "input_error" << endl;
    }

    return 0;
}