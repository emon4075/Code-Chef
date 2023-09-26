#include <iostream>
using namespace std;

int main()
{
    int T, X;
    double discountPercentage, discountFlat;
    cin >> T;
    while (T--)
    {
        cin >> X;
        discountPercentage = X * 0.1;
        discountFlat = 100;
        if (discountFlat >= discountPercentage)
        {
            cout << discountFlat << endl;
        }
        else
        {
            cout << discountPercentage << endl;
        }
    }

    return 0;
}
