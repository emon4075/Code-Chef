#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        string S;
        cin >> S;
        int swipes = 0;
        for (int i = 0; i < N; ++i)
        {
            if (S[i] == '0')
            {
                swipes--;
            }
            else
            {
                swipes = X;
            }
            if (swipes < 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (swipes >= 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
