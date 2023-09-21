// https://www.codechef.com/problems/CS2023_GIFT
#include <iostream>
using namespace std;

int main()
{
    int X, N, M;
    cin >> X >> N >> M;
    if ((X + M) >= N)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
