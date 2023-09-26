#include <iostream>
using namespace std;

int main()
{
    int T, Na, Nb, Nc;
    cin >> T;
    while (T--)
    {
        cin >> Na >> Nb >> Nc;
        if (Na > (Nb + Nc) || Nb > (Na + Nc) || Nc > (Nb + Na))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
