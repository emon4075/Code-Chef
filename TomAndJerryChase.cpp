// https://www.codechef.com/problems/JERRYCHASE
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X > Y || X == Y)
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
