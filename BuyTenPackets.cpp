#include <iostream>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        cout << (Y * 2) + X << endl;
    }

    return 0;
}