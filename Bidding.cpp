// https://www.codechef.com/problems/AUCTION
#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        if (A > B && A > C)
        {
            cout << "Alice\n";
        }
        else if (B > A && B > C)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie\n";
        }
    }

    return 0;
}
