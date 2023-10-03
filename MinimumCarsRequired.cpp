#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << ceil(N * 1.0 / 4) << endl;
    }

    return 0;
}
