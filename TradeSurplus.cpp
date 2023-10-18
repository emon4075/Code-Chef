#include <iostream>
using namespace std;
int main()
{
    int T, A1, A2, B1, B2, C;
    cin >> T;
    while (T--)
    {
        cin >> A1 >> A2 >> B1 >> B2;
        C = (A1 - A2) + (B1 - B2);
        if (C < 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}