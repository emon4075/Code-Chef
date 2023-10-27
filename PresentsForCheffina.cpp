#include <iostream>
using namespace std;
int main()
{
    int T;
    long long int N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        long long int free = N / 5;
        cout << N - free << endl;
    }

    return 0;
}