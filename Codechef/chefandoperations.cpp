#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool possible = true;
        long a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        long diff = 0;
        for (int i = 1; i <= n-2; i++)
        {
            if (a[i] > b[i])
            {
                possible = false;
                break;
            }
            if (a[i] != b[i])
            {
                diff = b[i] - a[i];
                a[i] += diff;
                a[i + 1] += 2 * diff;
                a[i + 2] += 3 * diff;
            }
        }
        if (!possible || a[n] != b[n] || a[n - 1] != b[n - 1])
            cout << "NIE" << endl;
        else
            cout << "TAK" << endl;
    }
    return 0;
}
