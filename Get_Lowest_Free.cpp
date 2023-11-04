#include <iostream>
using namespace std;
int main()
{
    int T, A[3];
    cin >> T;
    while (T--)
    {
        int Sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> A[i];
            Sum += A[i];
        }
        int min = A[0];
        for (int i = 0; i < 3; i++)
        {
            if (min >= A[i])
            {
                min = A[i];
            }
        }
        cout << Sum - min << endl;
    }

    return 0;
}