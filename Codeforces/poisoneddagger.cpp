#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
      ll n,h;
      cin>>n>>h;
      vector<ll> a(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      ll l=1,r=1e18;
      while(l<=r)
      {
          ll m=(r+l)/2;
          ll sum=m;
          for (ll i = 0; i < n - 1; ++i)
               sum += min(m, a[i + 1] - a[i]);

         if (sum < h)
            l = m + 1;
        else
        r = m - 1;
      }
      cout<<r + 1<<'\n';
      }
}
