// https://www.codechef.com/problems/DETSCORE
#include <iostream>
using namespace std;

int main()
{
    int T, X, N;
    cin >> T;
    while (T--)
    {
        cin >> X >> N;
        cout << (X / 10) * N << endl;
    }

    return 0;
}
