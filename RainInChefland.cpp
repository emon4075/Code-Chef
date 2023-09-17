// https://www.codechef.com/problems/RAINFALL1
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X < 3)
        {
            cout << "LIGHT\n";
        }
        else if (X >= 3 && X < 7)
        {
            cout << "MODERATE\n";
        }
        else
        {
            cout << "HEAVY\n";
        }
    }

    return 0;
}
