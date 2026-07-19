#include <bits/stdc++.h>
using namespace std;

int main()
{

    long a, b, c;
    cin >> a >> b >> c;

    long temp1 = a, temp2 = b, temp3 = c;

    // Correctly sort a, b, c
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);

    // Print sorted values
    cout << a << "\n"
         << b << "\n"
         << c << "\n\n";

    // Print original values
    cout << temp1 << "\n"
         << temp2 << "\n"
         << temp3 << "\n";

    return 0;
}