#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, A, B, C, sum1, sum2, sum3;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        sum1 = A + B;
        sum2 = A + C;
        sum3 = B + C;
        if (sum1 % 2 != 0 || sum2 % 2 != 0 || sum3 % 2 != 0)
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
