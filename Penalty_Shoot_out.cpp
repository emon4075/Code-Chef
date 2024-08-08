#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        int Rem_A = 2;
        int Rem_B = 1;
        int Max_By_A = Rem_A + X;
        int Max_By_B = Rem_B + Y;
        if ((Max_By_A >= Y) && (Max_By_B >= X))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}