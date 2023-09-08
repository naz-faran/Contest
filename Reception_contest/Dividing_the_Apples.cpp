/* One day Zelda and Link went to the garden to pick some apples. After collecting, they decided to divide the apples they collected into two equal parts. But as they were fond of even numbers, they decided that the two parts must themselves be even numbers.Let them know if they can divide the apples into two parts. Print out "Yes" if its possible and "No" if its not.*/

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
    if (n % 2 == 0 && (n / 2) % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}