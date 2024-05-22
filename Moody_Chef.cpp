#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, L, R;
        cin >> N >> L >> R;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int Maxi = 0, Mini = 0;
        int Current = 0;
        for (int i = 0; i < N; i++)
        {
            if (L <= A[i] && A[i] <= R)
            {
                Current++;
            }
            else
            {
                Current--;
            }
            Maxi = max(Maxi, Current);
            Mini = min(Mini, Current);
        }
        cout << Maxi << " " << Mini << endl;
    }
    return 0;
}
