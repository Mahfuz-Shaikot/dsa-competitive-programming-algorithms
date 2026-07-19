#include <iostream>
#include <array>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int even_rlt = 0, odd_rlt = 0, pos_rlt = 0, neg_rlt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            even_rlt += 1;
        }
        else if (arr[i] % 2 != 0)
        {
            odd_rlt += 1;
        }
        if (arr[i] > 0)
        {
            pos_rlt += 1;
        }
        else if (arr[i] < 0)
        {
            neg_rlt += 1;
        }
    }

    cout << "Even: " << even_rlt << endl;
    cout << "Odd: " << odd_rlt << endl;
    cout << "Positive: " << pos_rlt << endl;
    cout << "Negative: " << neg_rlt << endl;

    return 0;
}