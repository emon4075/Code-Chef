#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, A, B, Sum = 0;
        cin >> N >> A >> B;
        while (N != 2)
        {
            Sum += (A + B);
            N /= 2;
        }
        cout << Sum + A << endl;
    }

    return 0;
}