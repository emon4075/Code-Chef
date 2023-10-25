#include <iostream>
using namespace std;
int main()
{
    int T, P;
    cin >> T;
    while (T--)
    {
        cin >> P;
        int count = P / 100;
        count = count + (P % 100);
        if (count <= 10)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}