#include <iostream>
using namespace std;

int main()
{
    int T, Sx, Sy, Ex, Ey;
    cin >> T;
    while (T--)
    {
        cin >> Sx >> Sy >> Ex >> Ey;
        if (Sx != Ex && Sy != Ey)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}