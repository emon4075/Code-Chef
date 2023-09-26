#include <iostream>
using namespace std;

int main()
{
    int T, C, X, Y, needChoco;
    cin >> T;
    while (T--)
    {
        cin >> C >> X >> Y;
        needChoco = C - X;
        cout << Y * needChoco << endl;
    }

    return 0;
}
