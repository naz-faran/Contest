/* Your friend Steven is very lazy and does not like to move at all. But whenever he does, he moves either 1, 3 or 5 blocks at a time. Figure out how many turns he would need to reach a certain distance n.*/

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

    int n, m, count = 0;
    cin >> n;
    for (int i = 0; n > 0; i++)
    {
        if (n >= 5)
        {
            m = n / 5;
            count += m;
            n -= (m * 5);
        }
        else if (n >= 3)
        {
            count++;
            n -= 3;
        }
        else if (n >= 1)
        {
            count += n;
            n = 0;
        }
    }
    cout << count;

    return 0;
}