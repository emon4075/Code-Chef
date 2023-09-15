// https://www.codechef.com/problems/MINHEIGHT
#include <iostream>
using namespace std;

int main()
{
    int X, H, T;
    cin >> T;
    while (T--)
    {
        cin >> X >> H;
        if (X >= H)
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
