// https://www.codechef.com/problems/MVR
#include <iostream>
using namespace std;

int main()
{
    // g-2 a-1
    int A, B, X, Y, Messi, Ronaldo;
    cin >> A >> B >> X >> Y;
    Messi = A * 2 + B * 1;
    Ronaldo = X * 2 + Y * 1;
    if (Messi > Ronaldo)
    {
        cout << "Messi" << endl;
    }
    else if (Ronaldo > Messi)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}
