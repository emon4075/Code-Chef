// https://www.codechef.com/practice/course/stacks-and-queues/STAQUEF/problems/PREP59
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int count = 0;
        string S;
        cin >> S;
        stack<char> ST;
        for (char C : S)
        {
            if (C == '(')
            {
                ST.push(C);
            }
            else if (C == ')')
            {
                if (!ST.empty())
                {
                    ST.pop();
                }
                else
                {
                    count = 1;
                }
            }
        }
        if (count == 1)
        {
            cout << 0 << endl;
        }
        else if (ST.empty())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}