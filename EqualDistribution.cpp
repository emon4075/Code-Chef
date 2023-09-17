// https://www.codechef.com/problems/EQUALDIST
#include <iostream>
using namespace std;

int main()
{
    int T, A, B;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        if ((A + B) % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
