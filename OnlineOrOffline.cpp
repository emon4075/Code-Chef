#include <iostream>
using namespace std;
int main()
{
    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        float onlineCost, offlineCost;
        onlineCost = N - (N * (0.1));
        offlineCost = M;
        if (onlineCost < offlineCost)
        {
            cout << "ONLINE" << endl;
        }
        else if (offlineCost < onlineCost)
        {
            cout << "DINING" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }

    return 0;
}