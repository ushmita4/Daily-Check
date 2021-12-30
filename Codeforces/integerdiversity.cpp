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
      ll a[n];
      set<ll> b;
      for(ll i=0;i<n;i++)
        cin>>a[i];
      for(ll i=0;i<n;i++)
      {
          if(b.find(a[i])!=b.end()){
            b.insert(-1*a[i]);
          }
          else{
            b.insert(a[i]);
          }
      }
      cout<<b.size()<<"\n";
    }
    return 0;
}
 
