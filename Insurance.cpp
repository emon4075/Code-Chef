#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (Y <= X)
        {
            cout << Y << endl;
        }
        else
        {
            cout << X << endl;
        }
    }

    return 0;
}
