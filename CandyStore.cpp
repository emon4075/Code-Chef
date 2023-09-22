#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (Y >= X)
        {
            cout << (X * 1) + ((Y - X) * 2) << endl;
        }
        else
        {
            cout << Y << endl;
        }
    }
    return 0;
}
