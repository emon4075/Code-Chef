#include <iostream>
using namespace std;
int main()
{
    int T, N, max;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int array[N];
        for (int i = 0; i < 4; i++)
        {
            cin >> array[i];
        }
        max = 0;
        for (int i = 0; i < 4; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            }
        }
        cout << max << endl;
    }

    return 0;
}