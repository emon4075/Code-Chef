#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    double avg;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        avg = (A + B) / 2.0;
        if (avg > C)
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
