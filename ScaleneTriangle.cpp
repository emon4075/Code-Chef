#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        if (A != B && B != C && C != A && C < (A + B))
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
