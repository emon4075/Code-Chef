#include <iostream>
using namespace std;

int main()
{
    int T, N, M, K, totalDays;
    cin >> T;
    while (T--)
    {
        cin >> N >> M >> K;
        totalDays = M * K;
        if (totalDays >= N)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
