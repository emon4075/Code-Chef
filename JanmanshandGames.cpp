#include <iostream>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        while (Y--)
        {
            X++;
        }
        if (X % 2 == 0)
        {
            cout << "Janmansh" << endl;
        }
        else
        {
            cout << "Jay" << endl;
        }
    }

    return 0;
}