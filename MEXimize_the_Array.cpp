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
        int A[N];
        int Mini_Operations = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        for (int i = 0; i < N; i++)
        {
            Mini_Operations += abs(A[i] - i);
        }
        cout << Mini_Operations << endl;
    }
    return 0;
}