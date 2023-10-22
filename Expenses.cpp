#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        float income = pow(2, X);
        while (N--)
        {
            income = income - (income * 0.5);
        }
        cout << income << endl;
    }

    return 0;
}