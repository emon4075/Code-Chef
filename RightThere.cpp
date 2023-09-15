// https://www.codechef.com/problems/RIGHTTHERE?tab=statement
#include <iostream>
using namespace std;

int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        if (N <= X)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
