#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        if (X >= N)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ceil((N - X) / 4.00) << endl;
        }
    }

    return 0;
}
