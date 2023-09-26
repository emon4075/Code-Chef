#include <iostream>
using namespace std;

int main()
{
    int T, R1, R2, R3;
    cin >> T;
    while (T--)
    {
        cin >> R1 >> R2 >> R3;
        if (R1 > (R2 + R3) || R2 > (R1 + R3) || R3 > (R2 + R1))
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
