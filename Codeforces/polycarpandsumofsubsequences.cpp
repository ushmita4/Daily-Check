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
      ll a[7];
      for(ll i=0;i<7;i++)
        cin>>a[i];

      cout<<a[0]<<" "<<a[1]<<" ";
      if(a[2]!=a[0]+a[1])
        cout<<a[2];
      else
        cout<<a[3];

      cout<<"\n";
    }
    return 0;
}
