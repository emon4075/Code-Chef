#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        int Count_0 = 0, Count_1 = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '0')
            {
                if (i == 0 || S[i - 1] != '0')
                {
                    Count_0++;
                }
            }
            else
            {
                if (i == 0 || S[i - 1] != '1')
                {
                    Count_1++;
                }
            }
        }
        cout << min(Count_0, Count_1) << endl;
    }
    return 0;
}