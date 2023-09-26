#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, X;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C >> X;
        if ((A + B) >= X || (A + C) >= X || (C + B) >= X)
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
