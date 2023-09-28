#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    long long Y, X;
    double percenatge;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        percenatge = (Y * 100.0) / X;
        if (percenatge >= 50)
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
