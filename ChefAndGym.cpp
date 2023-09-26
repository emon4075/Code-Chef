#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        if (Z < X)
        {
            cout << 0 << endl;
        }
        else if (Z >= X + Y)
        {
            cout << 2 << endl;
        }
        else if (Z < X + Y)
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
