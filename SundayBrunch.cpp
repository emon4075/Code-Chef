// Brunch---> a meal eaten in the late morning that is a combination of breakfast and lunch
#include <iostream>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X / Y <= 20)
        {
            cout << X / Y << endl;
        }
        else
        {
            cout << 20 << endl;
        }
    }

    return 0;
}