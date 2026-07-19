#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    long long n, m;
    cin >> n >> m;

    long temp1 = n % 10;
    long temp2 = m % 10;

    cout << temp1 + temp2 << endl;

    return 0;
}