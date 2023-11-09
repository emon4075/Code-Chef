#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int neededTime = X * Y;
        if (neededTime <= (Z * 1440))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}