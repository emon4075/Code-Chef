#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int D[N], count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> D[i];
            if (D[i] >= 1000)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
