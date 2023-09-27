#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    long long possibleRun;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        possibleRun = M * 6 * 6;
        if (possibleRun >= N)
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
