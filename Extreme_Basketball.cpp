#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int Diff = A - B;
        if (Diff >= 10)
        {
            cout << 0 << endl;
        }
        else
        {
            int X = ceil((10 - Diff) / 3.0);
            cout << X << endl;
        }
    }

    return 0;
}