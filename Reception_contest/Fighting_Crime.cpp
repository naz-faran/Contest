/* Batman likes to fight crime at the dark on the night. But he is only human and can't out too many guys at the same time. If '0' represents the enemy and '1' represents his allies, print out whether he can win the fight where, if 5 or more enemies group up on him (5 or more zeros together), he loses.*/

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    string str;
    int count = 0;
    bool flag = 0;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n ; i++)
    {
        if (str[i] == '0')
        {
            count++;
            if (count >= 5)
            {
                flag = 1;
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    if (flag)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}