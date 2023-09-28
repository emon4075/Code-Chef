#include <iostream>
using namespace std;

int main()
{
    int T, A, B, X, Y, generatedPower, demandedPower;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> X >> Y;
        demandedPower = A * B;
        generatedPower = X * Y;
        if (generatedPower >= demandedPower)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
