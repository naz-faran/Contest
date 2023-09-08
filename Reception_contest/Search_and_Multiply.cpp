// Initialize the two following arrays:

// a = {10, 20, 30, 40, 50, 60, 70} b = {50, 70, 10, 40, 30}

// Now take an user input n and check if n is present on the two arrays. If it is present on both, find the positions (indices) and multiply them and print the result. If not, then print "-1".


#include <bits/stdc++.h>
using namespace std;

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

    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int b[] = {50, 70, 10, 40, 30};
    bool flag1 = 0, flag2 = 0;
    int n, aa, bb;
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == n)
        {
            aa = i;
            flag1 = 1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (b[i] == n)
        {
            bb = i;
            flag2 = 1;
        }
    }

    if (flag1 == 1 && flag2 == 1)
    {
        cout << aa * bb;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}