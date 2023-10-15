#include <iostream>
using namespace std;
int main()
{
    int T, A, B;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        if (21 - (A + B) <= 10)
        {
            cout << 21 - (A + B) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}