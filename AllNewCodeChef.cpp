// https://www.codechef.com/problems/NEWCC
#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X < Y)
    {
        cout << "Old\n";
    }
    else if (X == Y)
    {
        cout << "Same\n";
    }
    else
    {
        cout << "New\n";
    }

    return 0;
}
