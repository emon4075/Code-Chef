#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, X, Y, R;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y >> R;
        int platesNeeded = ceil((X + (R / 30)) / (float)Y);
        cout << platesNeeded << endl;
    }

    return 0;
}