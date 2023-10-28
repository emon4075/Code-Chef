#include <iostream>
using namespace std;
int main()
{
    int T, N, K, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> N >> K >> X >> Y;
        int blue = N - K;
        cout << (K * X) + (blue * Y) << endl;
    }

    return 0;
}