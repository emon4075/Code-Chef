#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 15)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
