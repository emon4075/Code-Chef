#include <iostream>
using namespace std;
int main()
{
    int T, N, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if ((A[i] + K) % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}