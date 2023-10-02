#include <iostream>
using namespace std;

int main()
{
    int T, A, B, valueOfA, valueOfB;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        valueOfA = A * 10;
        valueOfB = B * 5;
        if (valueOfA > valueOfB)
        {
            cout << "First\n";
        }
        else if (valueOfA == valueOfB)
        {
            cout << "ANY\n";
        }
        else
        {
            cout << "SECOND" << endl;
        }
    }

    return 0;
}
