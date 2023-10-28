#include <iostream>
using namespace std;
int main()
{
    int R, O, C;
    cin >> R >> O >> C;
    int oversLeft = 20 - O;
    int runsNeeded = R - C;
    int totalScore = C + (36 * oversLeft);
    if (totalScore > R)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}