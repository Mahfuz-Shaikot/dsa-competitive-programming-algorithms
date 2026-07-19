#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp = 1;

    for (int i = 0; i < n; i++)
    {
        cout << temp++ << endl;
    }

    return 0;
}