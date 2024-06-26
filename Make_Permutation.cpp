#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        bool BL = true;
        sort(V.begin(), V.end());
        for (int i = 0; i < N; i++)
        {
            if (V[i] > i + 1)
            {
                BL = false;
            }
        }
        if (!BL)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}