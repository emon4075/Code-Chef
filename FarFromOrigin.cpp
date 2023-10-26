#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X1, X2, Y1, Y2;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X1 >> Y1 >> X2 >> Y2;
        float alex = sqrt((X1 * X1) + (Y1 * Y1));
        float bob = sqrt((X2 * X2) + (Y2 * Y2));
        if (alex < bob)
        {
            cout << "BOB" << endl;
        }
        else if (bob < alex)
        {
            cout << "ALEX" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }

    return 0;
}