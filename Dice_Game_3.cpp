#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, Score;
        cin >> N;
        if (N % 2 == 0)
        {
            Score = (12 * (N / 2)) + ((N / 2) * 1);
            cout << Score << endl;
        }
        else
        {
            Score = (12 * (N / 2)) + ((N / 2) * 1) + 6;
            cout << Score << endl;
        }
    }

    return 0;
}