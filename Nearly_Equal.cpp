#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int H_Distance(string &A, string &B)
{
    int Dist = 0;
    for (int i = 0; i < B.size(); i++)
    {
        if (A[i] != B[i])
        {
            Dist++;
        }
    }
    return Dist;
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        string A, B;
        cin >> A >> B;
        int Mini_Dist = INT_MAX;
        for (int i = 0; i <= N - M; i++)
        {
            string Sub = A.substr(i, M);
            int Current_Dist = H_Distance(Sub, B);
            Mini_Dist = min(Mini_Dist, Current_Dist);
        }
        cout << Mini_Dist << endl;
    }
    return 0;
}
