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
        int N;
        cin >> N;
        int Power = 1;
        while (true)
        {
            if (Power * 2 > N)
            {
                break;
            }
            Power = Power * 2;
        }
        int Slice = 2 * (N - Power);
        cout << Slice << endl;
    }
    return 0;
}