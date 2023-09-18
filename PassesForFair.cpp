#include <iostream>
using namespace std;

int main()
{
    int T, N, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        if (N < K)
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
