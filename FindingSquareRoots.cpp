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
        int res = sqrt(N);
        cout << res << endl;
    }

    return 0;
}