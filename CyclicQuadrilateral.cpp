#include <iostream>
using namespace std;
int main()
{
    int T, A, B, C, D;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C >> D;
        if ((A + C == 180) && (B + D == 180))
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