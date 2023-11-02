#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, N, X, D;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> D;
        int survive = floor(N / (5 * (float)X));
        cout << survive + D << endl;
    }

    return 0;
}