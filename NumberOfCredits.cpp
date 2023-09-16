// https://www.codechef.com/problems/CREDS
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        cout << (X * 4) + (Y * 2) + (Z * 0) << endl;
    }

    return 0;
}
