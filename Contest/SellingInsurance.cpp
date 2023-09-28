#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X;
    double commission;
    cin >> T;
    while (T--)
    {
        cin >> X;
        commission = X * (20 / 100.00);
        cout << ceil(100.00 / commission) << endl;
    }

    return 0;
}
