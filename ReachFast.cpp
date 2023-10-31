#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X, Y, K, diff;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> K;
        if (X >= Y)
        {
            diff = X - Y;
        }
        else
        {
            diff = Y - X;
        }
        cout << ceil(diff / (float)K) << endl;
    }

    return 0;
}