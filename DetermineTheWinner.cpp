#include <iostream>
using namespace std;

int main()
{
    int T, a, b, c, d, A, B, C, D;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        A = a + c;
        B = a + d;
        C = b + c;
        D = b + d;
        if (A >= B && A >= C && A >= D)
        {
            cout << A << endl;
        }
        else if (B >= A && B >= C && B >= D)
        {
            cout << B << endl;
        }
        else if (C >= A && C >= B && C >= D)
        {
            cout << C << endl;
        }
        else
        {
            cout << D << endl;
        }
    }
    return 0;
}
