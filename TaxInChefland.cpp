// https://www.codechef.com/problems/TAXES
#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 100)
        {
            cout << X << endl;
        }
        else
        {
            cout << X - 10 << endl;
        }
    }

    return 0;
}
