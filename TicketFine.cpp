// https://www.codechef.com/problems/TCKTFINE
#include <iostream>
using namespace std;

int main()
{
    int T, X, P, Q;
    cin >> T;
    while (T--)
    {
        cin >> X >> P >> Q;
        if (P >= Q)
        {
            cout << X * (P - Q) << endl;
        }
    }

    return 0;
}
