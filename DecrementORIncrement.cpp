#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N % 4 == 0)
    {
        N++;
        cout << N << endl;
    }
    else
    {
        N--;
        cout << N << endl;
    }

    return 0;
}