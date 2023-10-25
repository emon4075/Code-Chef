#include <iostream>
using namespace std;
int main()
{
    /*
    chef---a,x
    chefina---b,y
    */
    int T, A, B, X, Y;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> X >> Y;
        float timeNeededA = A / (float)X;
        float timeNeededB = B / (float)Y;
        if (timeNeededA > timeNeededB)
        {
            cout << "Chefina" << endl;
        }
        else if (timeNeededA == timeNeededB)
        {
            cout << "Both" << endl;
        }
        else
        {
            cout << "Chef" << endl;
        }
    }

    return 0;
}