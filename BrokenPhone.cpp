#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X > Y)
        {
            cout << "NEW PHONE\n";
        }
        else if (Y > X)
        {
            cout << "REPAIR\n";
        }
        else
        {
            cout << "ANY\n";
        }
    }

    return 0;
}
