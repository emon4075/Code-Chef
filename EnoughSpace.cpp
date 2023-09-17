// https://www.codechef.com/problems/ENSPACE
#include <iostream>
using namespace std;

int main()
{
    int T, N, X, Y, occupied;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> Y;
        occupied = X * 1 + Y * 2;
        if (occupied <= N)
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
