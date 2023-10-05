#include <iostream>
using namespace std;

int main()
{
    int T, A, B, sum;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        sum = A + B;
        int count = 0;
        for (int i = 2; i < sum; i++)
        {
            if (sum % i == 0)
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
