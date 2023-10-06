#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X == 1)
        {
            cout << "HUGE\n";
        }
        else if (X == 2)
        {
            cout << "SMALL\n";
        }
        else if (X == 3)
        {
            cout << "NORMAL\n";
        }
        else if (X % 3 == 1)
        {
            cout << "HUGE\n";
        }
        else if (X % 3 == 2)
        {
            cout << "SMALL\n";
        }
        else{
            cout<<"NORMAL"<<endl;
        }
    }

    return 0;
}
