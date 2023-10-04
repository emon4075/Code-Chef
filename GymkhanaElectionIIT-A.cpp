#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    n---post
    m--- voters
    hero om
    */
    long long T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;

        if (M % 2 == 0)
        {
            long long minimumVote = (M / 2.0);
            cout << minimumVote + 1 << endl;
        }
        else
        {
            long long minimumVote = ceil(M / 2.0);
            cout << minimumVote << endl;
        }
    }

    return 0;
}
