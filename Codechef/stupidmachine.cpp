#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  ll n;
  cin>>n;
  ll mini=INT_MAX;
  ll ans=0;
  for(int i=0;i<n;i++)
  {
      ll x;
      cin>>x;
      mini=min(x,mini);
      ans=ans+mini;
  }
  cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  ll t; cin>>t;
  while (t--)
    solve();
}
