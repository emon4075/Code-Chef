// https://www.codechef.com/problems/BURGERS
#include <iostream>
using namespace std;

int main()
{
    long long T, A, B;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        if (A < B)
        {
            cout << A << endl;
        }
        else
        {
            cout << B << endl;
        }
    }

    return 0;
}
