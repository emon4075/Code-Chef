#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, STR;
        cin >> S;
        stack<char> ST;
        for (char C : S)
        {
            if (!((C >= 'a' && C <= 'z')) && C != ')')
            {
                ST.push(C);
            }
            else if (C >= 'a' && C <= 'z')
            {
                STR += C;
            }
            else if (C == ')')
            {
                while (ST.top() != '(' && (!ST.empty()))
                {
                    STR += ST.top();
                    ST.pop();
                }
                if (!ST.empty() && ST.top() == '(')
                {
                    ST.pop();
                }
            }
        }
        cout << STR << endl;
    }
    return 0;
}
