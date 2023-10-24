#include <iostream>
using namespace std;
int main()
{
    int T, N, X, P;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> P;
        int wrongAns = N - X;
        int totalMarks = (X * 3) - (1 * wrongAns);
        if (totalMarks >= P)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }

    return 0;
}