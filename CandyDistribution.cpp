#include <iostream>
using namespace std;
int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (N % (M * 2) == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}