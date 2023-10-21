#include <iostream>
using namespace std;
int main()
{
    int T, N, A;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int A[N], count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] >= 10 && A[i] <= 60)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}