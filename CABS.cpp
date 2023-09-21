// https://www.codechef.com/problems/CABS
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X < Y)
        {
            cout << "FIRST\n";
        }
        else if (X > Y)
        {
            cout << "SECOND\n";
        }
        else
        {
            cout << "ANY\n";
        }
    }

    return 0;
}
