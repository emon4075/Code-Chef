#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, N, X;
    double subNeed;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        subNeed = ceil(N / 6.0);
        cout << subNeed * X << endl;
    }

    return 0;
}
