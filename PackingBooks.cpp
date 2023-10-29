#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int boxNeeded = ceil(Y / (float)Z);
        cout << X * boxNeeded << endl;
    }

    return 0;
}