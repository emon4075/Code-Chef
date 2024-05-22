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
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int Maxi = *max_element(A, A + N);
        int Maxi_Index = distance(A, max_element(A, A + N));
        int Sum = 0;
        for (int i = 0; i <= Maxi_Index; i++)
        {
            if (i == Maxi_Index)
            {
                Sum = Sum + (A[i] * 2);
            }
            else
            {
                Sum += A[i];
            }
        }
        cout << Sum << endl;
    }

    return 0;
}