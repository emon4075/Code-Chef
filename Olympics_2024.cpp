#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    int A, B, C;
    cin >> A >> B >> C;
    cout << (5 - A) + (5 - B) + (5 - C) << endl;
    return 0;
}