#include <iostream>
using namespace std;

int main()
{
    long long T, X, Y, M, rentCost;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> M;
        rentCost = X * M;
        if (rentCost < Y)
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
