#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        if ((N % 4) == 0)
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Not Good\n";
        }
    }

    return 0;
}
