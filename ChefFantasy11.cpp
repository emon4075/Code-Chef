#include <iostream>
using namespace std;

int main()
{
    int n, sum, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        sum = n * (n - 1);
        cout << sum << endl;
    }
    return 0;
}