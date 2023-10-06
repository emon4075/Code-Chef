#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        char ch[N];
        cin.ignore();
        cin.getline(ch, 101);
        for (int i = 0; ch[i] != '\0'; i++)
        {
            if (ch[i] == 'A')
            {
                cout << "T";
            }
            else if (ch[i] == 'T')
            {
                cout << "A";
            }
            else if (ch[i] == 'C')
            {
                cout << "G";
            }
            else if (ch[i] == 'G')
            {
                cout << "C";
            }
        }
        cout << "\n";
    }

    return 0;
}
