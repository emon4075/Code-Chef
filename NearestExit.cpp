#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 50)
        {
            cout << "LEFT\n";
        }
        else
        {
            cout << "Right" << endl;
        }
    }

    return 0;
}
