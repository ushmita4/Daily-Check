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
      cin>>n;
      if(n<=3)
        cout<<n-1<<"\n";
      else{
        if(n%2==0)
            cout<<2<<"\n";
        else
            cout<<3<<"\n";
      }
    }
    return 0;
}
