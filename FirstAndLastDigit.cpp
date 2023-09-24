#include <iostream>
using namespace std;
int main()
{
    int T, a = 0, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        a = N % 10;
        N = N / 10;
        while (N > 9)
        {
            N = N / 10;
        }
        cout << a << endl;
        cout << N << endl;
        cout << a + N << endl;
    }

    return 0;
}