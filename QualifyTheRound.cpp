#include <iostream>
using namespace std;

int main()
{
    int T, X, A, B;
    cin >> T;
    while (T--)
    {
        cin >> X >> A >> B;
        int score = A * 1 + B * 2;
        if (score >= X)
        {
            cout << "Qualify\n";
        }
        else
        {
            cout << "NotQualify" << endl;
        }
    }

    return 0;
}
