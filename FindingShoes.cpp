#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (M <= N)
        {
            cout << 2 * N - M << endl;
        }
        else
        {
            cout << 2 * N - N << endl;
        }
    }

    return 0;
}
