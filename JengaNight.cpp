#include <iostream>
using namespace std;

int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        if (N <= X && (N % X == 0 || X % N == 0))
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
