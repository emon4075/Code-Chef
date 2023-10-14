#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X, Y, Z, breakNeeded;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        breakNeeded = ceil(X / 3.0) - 1;
        cout << (X * Y) + (breakNeeded * Z) << endl;
    }

    return 0;
}