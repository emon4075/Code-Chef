#include <iostream>
using namespace std;

int main()
{
    int T, N, X, count = 0, crs;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        crs = N * X;
        if (crs >= 10000 && crs < 100000)
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
