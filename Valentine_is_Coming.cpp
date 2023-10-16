#include <iostream>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y;
        int result = X / Y;
        cout << result << endl;
    }

    return 0;
}