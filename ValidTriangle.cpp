#include <iostream>
using namespace std;
int main()
{
    int T, A, B, C;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> A >> B >> C;
        if (A + B + C == 180)
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