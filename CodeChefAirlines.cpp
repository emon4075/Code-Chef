#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        int totalCapacity = X * 10;
        if (Y <= totalCapacity)
        {
            cout << Y * Z << endl;
        }
        else
        {
            cout << totalCapacity * Z << endl;
        }
    }

    return 0;
}
