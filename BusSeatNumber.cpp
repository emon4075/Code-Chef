#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        if (N <= 10)
        {
            cout << "Lower Double\n";
        }
        else if (N <= 15)
        {
            cout << "Lower Single\n";
        }
        else if (N <= 25)
        {
            cout << "Upper Double\n";
        }
        else
        {
            cout << "Upper Single\n";
        }
    }

    return 0;
}
