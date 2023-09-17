// https://www.codechef.com/problems/MANAPTS
#include <iostream>
using namespace std;

int main()
{
    long long T;
    int X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        cout << Y / X << endl;
    }

    return 0;
}
