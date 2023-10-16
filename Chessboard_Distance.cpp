#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X1, X2, Y1, Y2;
    cin >> T;
    while (T--)
    {
        cin >> X1 >> Y1 >> X2 >> Y2;
        int firstDistance = abs(X1 - X2);
        int secondDistance = abs(Y1 - Y2);
        if (firstDistance >= secondDistance)
        {
            cout << firstDistance << endl;
        }
        else
        {
            cout << secondDistance << endl;
        }
    }

    return 0;
}