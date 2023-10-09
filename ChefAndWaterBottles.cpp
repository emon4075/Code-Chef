#include <iostream>
using namespace std;
int main()
{
    int T, N, X, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> K;
        int bottleBeFilled = K / X;
        if (bottleBeFilled >= N)
        {
            cout << N << endl;
        }
        else
        {
            cout << bottleBeFilled << endl;
        }
    }

    return 0;
}