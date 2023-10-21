#include <iostream>
using namespace std;
int main()
{
    int T, X, coinsNeeded;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            coinsNeeded = 0;
            coinsNeeded = X / 10.0;
            X = X % 10;
            coinsNeeded = coinsNeeded + (X / 5);
            cout << coinsNeeded << endl;
        }
    }

    return 0;
}