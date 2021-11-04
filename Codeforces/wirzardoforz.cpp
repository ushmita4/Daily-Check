#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s="989";
        if(n<=3)
            cout<<s.substr(0,n)<<"\n";
        else{
          cout << s;
    for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
        }
    }
}

