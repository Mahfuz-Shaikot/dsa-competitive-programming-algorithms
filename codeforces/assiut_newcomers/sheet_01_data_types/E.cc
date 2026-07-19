#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double pi = 3.141592653, r, area;
    cin >> r;

    area = pi * r * r;

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}