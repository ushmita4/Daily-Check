#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
const int maxi=1e5+5;
ll ans[maxi];
void pre()
{
    ans[1]=1;
    for(ll i=2;i<maxi;i++){
        ans[i]=(ans[i-1]*2)%mod;
    }
}
int main(){
    fast;
    pre();
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      cout<<ans[n]<<"\n";
}
}
