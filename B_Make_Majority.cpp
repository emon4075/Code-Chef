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
        string S;
        cin >> S;
        stack<char> ST;
        for (auto C : S)
        {
            if (ST.empty())
            {
                ST.push(C);
            }
            else if (ST.top() == '0' && C == '0')
            {
                continue;
            }
            else
            {
                ST.push(C);
            }
        }
        int Count_1 = 0, Count_0 = 0;
        while (!ST.empty())
        {
            if (ST.top() == '1')
            {
                Count_1++;
            }
            else
            {
                Count_0++;
            }
            ST.pop();
        }
        if (Count_1 > Count_0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}