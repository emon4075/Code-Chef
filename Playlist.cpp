#include <iostream>
using namespace std;

int main()
{
    int T, X, N, loopLength;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        loopLength = X * 3;
        cout << N / loopLength << endl;
    }

    return 0;
}
