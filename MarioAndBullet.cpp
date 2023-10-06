// Goomba is fictiobnal mushroomm in Japan
#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    while (T--)
    {
        cin >> X >> Y >> Z;
        if (Z >= (Y / X))
        {
            cout << Z - (Y / X) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
