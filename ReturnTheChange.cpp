#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        float r = X / 10.0;
        cout << 100 - (round(r) * 10) << endl;
    }

    return 0;
}