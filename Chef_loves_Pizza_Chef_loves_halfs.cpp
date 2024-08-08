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
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        double Base = log2(N);
        int first = pow(2, floor(Base));
        int Count = 0;
        for (int i = first; i < N; i += 2)
        {
            Count += 4;
        }
        cout << Count << endl;
    }
    return 0;
}
