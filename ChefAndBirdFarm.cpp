#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        if ((Z % X != 0) && (Z % Y != 0))
        {
            cout << "NONE\n";
        }
        else if ((Z % X == 0) && (Z % Y != 0))
        {
            cout << "CHICKEN\n";
        }
        else if ((Z % X != 0) && (Z % Y == 0))
        {
            cout << "DUCK\n";
        }
        else if ((Z % X == 0) && (Z % Y == 0))
        {
            cout << "ANY\n";
        }
    }

    return 0;
}
