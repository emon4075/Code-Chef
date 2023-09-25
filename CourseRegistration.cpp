#include <iostream>
using namespace std;

int main()
{
    int T, N, M, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> M >> K;
        int possibleEnroll = M - K;
        if (N <= possibleEnroll)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
