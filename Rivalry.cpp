#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R1, R2, D1, D2, finalScore_1, finalScore_2;
    cin >> R1 >> R2;
    cin >> D1 >> D2;
    finalScore_1 = R1 + D1;
    finalScore_2 = R2 + D2;
    if (finalScore_1 > finalScore_2)
    {
        cout << "Dominater" << endl;
    }
    else
    {
        cout << "Everule" << endl;
    }
    return 0;
}