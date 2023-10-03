#include <iostream>
using namespace std;

int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        int array[N], count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
            if (array[i] >= X)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
