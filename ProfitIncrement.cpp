#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, newProfit;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        newProfit = X / 10;
        cout << newProfit + Y << endl;
    }
    return 0;
}
