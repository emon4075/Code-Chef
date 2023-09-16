// https://www.codechef.com/problems/SNDMAX
#include <iostream>
using namespace std;

int main()
{
    int N, a, b, c;
    cin >> N;
    while (N--)
    {
        cin >> a >> b >> c;
        if (a < b && a > c || a > b && a < c)
        {
            cout << a << endl;
        }
        else if (a > b && b > c || a < b && b < c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

    return 0;
}
