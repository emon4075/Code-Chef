#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        cout << ceil((Y - X) / 8.00) << endl;
    }

    return 0;
}
