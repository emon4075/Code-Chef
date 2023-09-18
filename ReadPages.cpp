// https://www.codechef.com/problems/READPAGES
#include <iostream>
using namespace std;

int main()
{
    int T, N, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> Y;
        if (N <= (X * Y))
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
