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
        vector<pair<int, int>> V;
        for (int i = 0; i < N; i++)
        {
            int A, B;
            cin >> A >> B;
            V.push_back({A, B});
        }
        long long Max = INT16_MIN;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                long long Res = (V[i].first * V[j].second) + (V[i].second * V[j].first);
                Max = max(Res, Max);
            }
        }
        cout << Max << endl;
    }
    return 0;
}