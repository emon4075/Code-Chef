#include <iostream>
using namespace std;

int main()
{
    int T, C;
    cin >> T;
    while (T--)
    {
        cin >> C;
        if (C > 20)
        {
            cout << "HOT\n";
        }
        else
        {
            cout << "COLD\n";
        }
    }

    return 0;
}
