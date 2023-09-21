#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int X;
    float Y;
    cin >> X >> Y;
    if (X % 5 == 0 && X <= Y - 0.50)
    {
        cout << fixed << setprecision(2) << Y - (float)X - 0.5 << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << Y << endl;
    }

    return 0;
}