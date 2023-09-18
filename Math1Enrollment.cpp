// https://www.codechef.com/problems/M1ENROL
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (Y > X)
        {
            cout << Y - X << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
