#include <iostream>
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
        int max = A[0];
        for (int i = 0; i < N; i++)
        {
            if (max <= A[i])
            {
                max = A[i];
            }
        }
        cout << max << endl;
    }

    return 0;
}