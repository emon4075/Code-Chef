#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N, K;
        cin >> N >> K;
        vector<ll> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        ll MainSum = 0;
        for (int i = 0; i < N - 1; i++)
        {
            MainSum += abs(A[i] - A[i + 1]);
        }
        ll maxSum = MainSum;
        for (int i = 0; i < N; i++)
        {
            ll Orginal = A[i];
            A[i] = 1;
            ll TestSum = 0;
            for (int j = 0; j < N - 1; j++)
            {
                TestSum += abs(A[j] - A[j + 1]);
            }
            maxSum = max(maxSum, TestSum);
            A[i] = K;
            TestSum = 0;
            for (int j = 0; j < N - 1; j++)
            {
                TestSum += abs(A[j] - A[j + 1]);
            }
            maxSum = max(maxSum, TestSum);
            A[i] = Orginal;
        }
        cout << maxSum << endl;
    }
    return 0;
}
