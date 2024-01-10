#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int A[N], B[M];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
        }
        int MX = *max_element(B, B + M);
        int init = N - MX;
        sort(A + init, A + N);
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}