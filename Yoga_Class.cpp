#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        if (N % 2 == 0)
        {
            int Max = max((N * X), (N / 2 * Y));
            cout << Max << endl;
        }
        else
        {
            int M1 = N * X;
            int M2 = (1 * X) + (((N - 1) / 2) * Y);
            cout << max(M1, M2) << endl;
        }
    }
    return 0;
}