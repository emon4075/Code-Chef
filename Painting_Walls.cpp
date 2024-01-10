// https://www.codechef.com/START114D/problems/PAINTCHRIS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int Res = Z / (X * Y * 2.0);
        cout << Res << endl;
    }
    return 0;
}