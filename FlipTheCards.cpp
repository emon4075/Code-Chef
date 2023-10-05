#include <iostream>
using namespace std;

int main()
{
    int T, N, X, vice_Versa;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        vice_Versa = N - X;
        if (vice_Versa >= X)
        {
            cout << X << endl;
        }
        else if (vice_Versa < X)
        {
            cout << vice_Versa << endl;
        }
    }

    return 0;
}
