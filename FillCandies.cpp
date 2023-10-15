#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, N, K, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> M;
        cout << ceil(N / (K * 1.0 * M)) << endl;
    }

    return 0;
}