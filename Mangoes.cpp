#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        cout << (Z - Y) / X << endl;
    }

    return 0;
}
