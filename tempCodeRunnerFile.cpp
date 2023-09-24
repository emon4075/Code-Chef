#include <iostream>
using namespace std;
int main()
{
    int T, a, b;
    long long N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        a = N % 10;
        N = N / 10;
        while (N > 0)
        {
            b = N % 10;
            N = N / 10;
        }
        cout << a + b << endl;
    }

    return 0;
}