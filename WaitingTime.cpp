// https://www.codechef.com/problems/WAITTIME
#include <iostream>
using namespace std;

int main()
{
    int T, K, X;
    cin >> T;
    while (T--)
    {
        cin >> K >> X;
        cout << K * 7 - X << endl;
    }

    return 0;
}
