#include <iostream>
using namespace std;
int main()
{
    int T, X, Y, A, B;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> A >> B;
        if ((X == A && Y == B) || (X == B && Y == A))
        {
            cout << 0 << endl;
        }
        else if ((X != A && Y != B && Y != A && X != B) || (X != A && Y != B && Y != A && X != B))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}