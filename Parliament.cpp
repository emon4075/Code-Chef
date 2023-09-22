#include <iostream>
using namespace std;

int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        if ((float)N / 2 <= X)
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
