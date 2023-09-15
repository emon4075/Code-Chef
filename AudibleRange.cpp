// https://www.codechef.com/problems/AUDIBLE
#include <iostream>
using namespace std;

int main()
{
    long long T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 45000 && X >= 67)
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
