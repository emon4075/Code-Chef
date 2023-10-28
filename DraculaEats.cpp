#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int count = 0;
        for (int i = 2; i <= N; i += 7)
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}