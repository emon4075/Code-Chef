#include <iostream>
using namespace std;
int main()
{
    int T, A, X, B, Y;
    cin >> T;
    while (T--)
    {
        cin >> A >> X >> B >> Y;
        float aliceSpeed = A / (float)X;
        float bobSpeed = B / (float)Y;
        if (aliceSpeed > bobSpeed)
        {
            cout << "ALICE" << endl;
        }
        else if (bobSpeed > aliceSpeed)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}