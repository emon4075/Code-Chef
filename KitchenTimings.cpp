// https://www.codechef.com/problems/KITCHENTIME
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        cout << Y - X << endl;
    }

    return 0;
}
