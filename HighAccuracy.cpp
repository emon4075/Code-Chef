#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        int Vari = ceil(X / 3.00);
        cout << (Vari * 3) - X << endl;
    }

    return 0;
}
