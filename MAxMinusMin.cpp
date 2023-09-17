// https://www.codechef.com/problems/MAXDIFFMIN
#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        cout << C - A << endl;
    }

    return 0;
}
