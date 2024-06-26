#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, S;
        cin >> N >> K >> S;
        int Res = (S - (N * N)) / (K - 1);
        cout << Res << endl;
    }
    return 0;
}