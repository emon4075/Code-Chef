// https://www.codechef.com/problems/KNGTOR
#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        cout << (N * 5) + (M * 7) << endl;
    }

    return 0;
}
