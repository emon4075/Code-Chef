// https://www.codechef.com/problems/APPLORNG
#include <iostream>
using namespace std;

int main()
{
    long long X, A, B;
    cin >> X;
    cin >> A >> B;
    if (A + B <= X)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
