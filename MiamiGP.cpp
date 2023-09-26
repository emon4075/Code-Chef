#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    double ruleTime;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        ruleTime = X * 1.07;
        if (Y <= ruleTime)
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
