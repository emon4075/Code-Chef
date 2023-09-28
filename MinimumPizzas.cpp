#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X, N;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        cout << ceil((N * X) / 4.0) << endl;
    }

    return 0;
}
