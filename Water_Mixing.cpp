#include <iostream>
using namespace std;
int main()
{
    int T, A, B, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> X >> Y;
        if (A >= B)
        {
            if (B + Y >= A)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (A + X >= B)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}