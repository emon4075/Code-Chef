// https://www.codechef.com/problems/SIXFRIENDS
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, dR, tR;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        dR = X * 3;
        tR = Y * 2;
        if (dR <= tR)
        {
            cout << dR << endl;
        }
        else
        {
            cout << tR << endl;
        }
    }
    return 0;
}
