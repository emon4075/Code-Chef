#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, clothCost, disposableCost;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        clothCost = Y * 10;
        disposableCost = X * 100;
        if (clothCost <= disposableCost)
        {
            cout << "Cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }

    return 0;
}
