#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    int Res = X / Y;
    if (Res >= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}