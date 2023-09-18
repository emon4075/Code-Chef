// https://www.codechef.com/problems/COUGAME
#include <iostream>
using namespace std;

int main()
{
    int T, G, B;
    cin >> T;
    while (T--)
    {
        cin >> G >> B;
        cout << B - G << endl;
    }

    return 0;
}
