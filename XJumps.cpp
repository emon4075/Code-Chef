#include <iostream>
using namespace std;
int main()
{
    int T, X, Y, steps, rem;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        if (X >= Y)
        {
            steps = X / Y;
            rem = X % Y;
            cout << steps + rem << endl;
        }
        else
        {
            cout << X << endl;
        }
    }

    return 0;
}