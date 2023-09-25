#include <iostream>
using namespace std;
int main()
{
    long long N, K, A;
    cin >> N >> K;

    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> A;
        if (A % K == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}