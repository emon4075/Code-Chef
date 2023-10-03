#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        if (A >= B && A >= C)
        {
            cout << A << endl;
        }
        else if (B >= A && B >= C)
        {
            cout << B << endl;
        }
        else
        {
            cout << C << endl;
        }
    }

    return 0;
}
