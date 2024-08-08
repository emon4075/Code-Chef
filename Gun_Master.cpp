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
        int N, D;
        cin >> N >> D;
        int Array[N];
        vector<bool> V;
        for (int i = 0; i < N; i++)
        {
            cin >> Array[i];
            if (Array[i] <= D)
            {
                V.push_back(false);
            }
            else
            {
                V.push_back(true);
            }
        }
        V.insert(V.begin(), false);
        int Count = 0;
        for (int i = 1; i < V.size(); i++)
        {
            if (V[i] != V[i - 1])
            {
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}