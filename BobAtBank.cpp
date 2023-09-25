#include <iostream>
using namespace std;

int main()
{
    int T, W, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> W >> X >> Y >> Z;
        cout << W + (Z * (X - Y)) << endl;
    }

    return 0;
}
