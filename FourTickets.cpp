// https://www.codechef.com/problems/FOURTICKETS
#include <iostream>
using namespace std;

int main()
{
    int T, X, Cost;
    cin >> T;
    while (T--)
    {
        cin >> X;
        Cost = X * 4;
        if (Cost <= 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
