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
        int A[N], count = 0, candyR[N] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[i] > A[j] && j > i)
                {
                    candyR[j]++;
                }
            }
        }
        for (int Candy : candyR)
        {
            if (Candy > 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
