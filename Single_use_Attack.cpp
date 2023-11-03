#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, H, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> H >> X >> Y;
        int D = H - Y;
        int chance = ceil(D / (float)X);
        cout << chance + 1 << endl;
    }

    return 0;
}