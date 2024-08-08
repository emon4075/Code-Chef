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
        int A, B, C, M;
        cin >> A >> B >> C >> M;
        if (A == B || B == C || A == C)
        {
            cout << "YES" << endl;
        }
        else if (abs(A - B) <= M || abs(A - C) <= M || abs(B - C) <= M)
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