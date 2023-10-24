#include <iostream>
using namespace std;
int main()
{
    int T, A, B;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        int pointsA = 500 - (2 * A);
        int pointsB = 1000 - (4 * (B + A));
        int order1 = pointsA + pointsB;
        pointsB = 1000 - (4 * B);
        pointsA = 500 - (2 * (A + B));
        int order2 = pointsA + pointsB;
        if (order1 >= order2)
        {
            cout << order1 << endl;
        }
        else
        {
            cout << order2 << endl;
        }
    }

    return 0;
}