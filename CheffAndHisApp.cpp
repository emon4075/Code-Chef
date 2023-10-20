#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        if (s < x + y + z)
        {
            if (s >= y + z || s >= x + z)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}