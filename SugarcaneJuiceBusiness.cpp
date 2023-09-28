#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << (N * 50 * 30) / 100 << endl;
    }
    return 0;
}