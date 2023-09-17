// https://www.codechef.com/problems/CHESSTIME
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        cout << (X * 60) / 20 << endl;
    }

    return 0;
}
