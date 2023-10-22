#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if ((A == 0 && B == 0) || (A == 0 && B == 1))
    {
        cout << "https://www.codechef.com/practice" << endl;
    }
    else if (A == 1 && B == 0)
    {
        cout << "https://www.codechef.com/contests" << endl;
    }
    else if (A == 1 && B == 1)
    {
        cout << "https://discuss.codechef.com" << endl;
    }

    return 0;
}