// https://www.codechef.com/practice/course/stacks-and-queues/STAQUEF/problems/NEC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        queue<int> Q1;
        queue<int> Q2;
        int n, k;
        cin >> n >> k;
        while (n--)
        {
            int a;
            cin >> a;
            Q1.push(a);
        }
        while (k--)
        {
            Q2.push(Q1.front());
            Q1.pop();
        }
        while (!Q2.empty())
        {
            Q1.push(Q2.front());
            Q2.pop();
        }
        while (!Q1.empty())
        {
            cout << Q1.front() << " ";
            Q1.pop();
        }
        cout << endl;
    }

    return 0;
}