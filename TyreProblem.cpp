#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        cout << (N * 2) + (M * 4) << endl;
    }

    return 0;
}
