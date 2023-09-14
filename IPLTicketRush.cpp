// https://www.codechef.com/problems/IPLTRSH
#include <iostream>
using namespace std;

int main()
{
    long long T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (N > M)
        {
            cout << N - M << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
