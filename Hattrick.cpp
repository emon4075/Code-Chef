#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        char C[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> C[i];
        }
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < 6; i++)
        {
            if (C[i] == 'W')
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else
            {
                count = 0;
            }
        }
        if (maxCount >= 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
