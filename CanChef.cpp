#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        int totalDistance = 15 * X;
        int coveredDistance = 2 * Y;
        if (totalDistance >= coveredDistance)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
