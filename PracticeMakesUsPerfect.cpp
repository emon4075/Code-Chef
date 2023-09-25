#include <iostream>
using namespace std;

int main()
{
    int P[4], count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> P[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (P[i] >= 10)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
