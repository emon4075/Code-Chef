#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, D, netA, netB;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C >> D;
        netA = A - C;
        netB = B - D;
        if (netA > netB)
        {
            cout << "Second\n";
        }
        else if (netA < netB)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Any\n";
        }
    }

    return 0;
}
