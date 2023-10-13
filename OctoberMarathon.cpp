#include <iostream>
using namespace std;
int main()
{
    int X;
    cin >> X;
    if (X < 3)
    {
        cout << "Gold" << endl;
    }
    else if (X < 6)
    {
        cout << "Silver" << endl;
    }
    else
    {
        cout << "Bronze" << endl;
    }

    return 0;
}