#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X % 3 == Y % 3)
        {
            cout << X % 3 << endl;
        }
    }

    return 0;
}