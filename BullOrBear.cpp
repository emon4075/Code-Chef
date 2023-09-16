// https://www.codechef.com/problems/BULLBEAR
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X > Y)
        {
            cout << "LOSS" << endl;
        }
        else if (X < Y)
        {
            cout << "PROFIT" << endl;
        }
        else
        {
            cout << "NEUTRAL" << endl;
        }
    }

    return 0;
}
