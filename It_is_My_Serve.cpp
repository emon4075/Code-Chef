#include <iostream>
using namespace std;
int main()
{
    int T, P, Q;
    cin >> T;
    while (T--)
    {
        cin >> P >> Q;
        int reminder = (P + Q) % 4;
        if (reminder == 1 || reminder == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}