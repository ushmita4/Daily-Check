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
        ll n;
        cin>>n;
        int a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        ll k=1;
        for(ll i=0;i<n/2;i++)
        {
            cout<<a[k]<<" "<<a[0]<<"\n";
            k++;
        }
}
}
