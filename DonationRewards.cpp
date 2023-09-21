// https://www.codechef.com/problems/DOREWARD
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 3)
        {
            cout << "BRONZE\n";
        }
        else if (X > 3 && X <= 6)
        {
            cout << "SILVER\n";
        }
        else
        {
            cout << "Gold\n";
        }
    }

    return 0;
}
