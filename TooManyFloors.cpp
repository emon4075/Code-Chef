#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        float chefFloor, chefinaFloor;
        chefFloor = ceil(X / (float)10);
        chefinaFloor = ceil(Y / (float)10);
        if (chefFloor >= chefinaFloor)
        {
            cout << chefFloor - chefinaFloor << endl;
        }
        else
        {
            cout << chefinaFloor - chefFloor << endl;
        }
    }

    return 0;
}