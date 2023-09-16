// https://www.codechef.com/problems/SUBSCRIBE
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 30)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
