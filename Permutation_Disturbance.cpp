#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, Count = 0;
        cin >> N;
        int P[N];
        for (int i = 0; i < N; i++)
        {
            cin >> P[i];
        }
        for (int i = 0; i < N - 1; i++)
        {
            swap(P[i], P[i + 1]);
            if (P[i] != i + 1 && P[i + 1] != i + 2)
            {
                Count++;
            }
            else
            {
                swap(P[i + 1], P[i]);
            }
        }
        cout << Count << endl;
    }

    return 0;
}