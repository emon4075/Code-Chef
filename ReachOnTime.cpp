// https://www.codechef.com/problems/TIMELY
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X >= 30)
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
