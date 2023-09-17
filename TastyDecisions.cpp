// https://www.codechef.com/problems/TASTEDEC
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, cho, can;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        cho = X * 2;
        can = Y * 5;
        if (cho > can)
        {
            cout << "Chocolate" << endl;
        }
        else if (can > cho)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }

    return 0;
}
