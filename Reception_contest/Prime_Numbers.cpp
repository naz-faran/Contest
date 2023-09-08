// Take a value from the user, n. Now print all the prime number between 0 and n.

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

    int n;
    cin >> n;
    bool flag;
    for (int i = 2; i < n; i++)
    {
        flag = 1;
        for (int j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << i << endl;
        }
    }

    return 0;
}