#include <bits/stdc++.h>
using namespace std;

int main()
{

    char x;
    cin >> x;

    int temp = int(x);

    if (65 <= temp && temp <= 92)
    {
        x += 32;
        cout << x << endl;
    }
    else if (97 <= temp && temp <= 124)
    {
        x -= 32;
        cout << x << endl;
    }

    return 0;
}
