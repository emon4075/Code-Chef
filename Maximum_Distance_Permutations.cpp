#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        for (int i = 1; i < N; i++)
        {
            cout << i << " ";
        }
        cout << N << endl;
        int Mid = N / 2;
        if (N % 2 == 1)
        {
            cout << N << " ";
            for (int i = 2; i < N; i++)
            {
                if (i + Mid > N - 1)
                {
                    cout << i - Mid << " ";
                }
                else
                {
                    cout << i + Mid << " ";
                }
            }
        }
        else
        {
            for (int i = 1; i < N; i++)
            {
                if (i + Mid > N)
                {
                    cout << i - Mid << " ";
                }
                else
                {
                    cout << i + Mid << " ";
                }
            }
        }
        if (N != 1)
        {
            cout << N - Mid << endl;
        }
        else
        {
            cout << endl;
        }
    }
}