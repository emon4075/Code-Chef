#include <iostream>
using namespace std;
int main()
{
    int T, X, Y, D;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> D;
        int skillDiff;
        if (X >= Y)
        {
            skillDiff = X - Y;
        }
        else
        {
            skillDiff = Y - X;
        }
        if (skillDiff <= D)
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