#include <iostream>
using namespace std;

int main()
{
    int T, N, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> Y;
        if ((X * N) >= Y && Y % X == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
