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
        ll n,c=0;
        cin>>n;
        for(ll i=1;i<=2*n;i++)
        {
            ll x;
            cin>>x;
            if(x%2!=0)
            c++;
        }
        if(c==n)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
}
}
