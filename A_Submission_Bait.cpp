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
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        unordered_map<int, int> freq;
        for (int i = 0; i < N; ++i)
        {
            freq[A[i]]++;
        }
        bool aliceWins = false;
        for (auto pair : freq)
        {
            if (pair.second % 2 == 1)
            {
                aliceWins = true;
                break;
            }
        }
        if (aliceWins)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
