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
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    ll a[n];
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=l && a[i]<=r && k>=a[i])
        {

            k=k-a[i];
        c++;
        }
    }
    cout<<c<<"\n";
}
}
 
