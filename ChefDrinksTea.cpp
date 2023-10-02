#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X, Y, Z, neededRefill;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        neededRefill = ceil(X / (float)Y);
        cout << neededRefill*Z << endl;
    }

    return 0;
}
