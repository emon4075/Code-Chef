#include <iostream>
using namespace std;

int main()
{
    int T, A, B, discountA, discountB, finalPriceA, finalPriceB;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        discountA = 100 * (A / 100.00);
        discountB = 200 * (B / 100.00);
        finalPriceA = 100 - discountA;
        finalPriceB = 200 - discountB;
        if (finalPriceA < finalPriceB)
        {
            cout << "FIRST\n";
        }
        else if (finalPriceA == finalPriceB)
        {
            cout << "BOTH\n";
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }

    return 0;
}
