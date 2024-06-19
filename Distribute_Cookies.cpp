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
        if (N < M)
        {
            int Rem = M % N;
            if (Rem == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                int addTime = N - Rem;
                int removeTime = Rem;
                cout << min(addTime, removeTime) << endl;
            }
        }
        else
        {
            cout << N - M << endl;
        }
    }
    return 0;
}
