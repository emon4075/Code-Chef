#include <iostream>
using namespace std;

int main()
{
    int T, W, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> W >> X >> Y >> Z;
        if (W + (Y * Z) > X)
        {
            cout << "overflow" << endl;
        }
        else if (W + (Y * Z) == X)
        {
            cout << "filled" << endl;
        }
        else
        {
            cout << "Unfilled" << endl;
        }
    }

    return 0;
}
