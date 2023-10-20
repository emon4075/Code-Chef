#include <iostream>
using namespace std;
int main()
{
    int T, N, A, B;
    cin >> T;
    while (T--)
    {
        cin >> N >> A >> B;
        int Even = 0, Odd = 0;
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                Even++;
            }
            else
            {
                Odd++;
            }
        }
        cout << (Even * A) + (Odd * B) << endl;
    }
    return 0;
}