#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, totalNumber;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        totalNumber = A + B + C;
        if (A >= 10 && B >= 10 && C >= 10 && totalNumber >= 100)
        {
            cout << "PASS\n";
        }
        else
        {
            cout << "FAIL\n";
        }
    }
    return 0;
}
