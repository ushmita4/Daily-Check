#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main(){
    fast;
    ll n,s;
    cin>>n>>s;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cin>>b[i];

    bool flag=false;
    for(int i=s-1;i<n;i++)
    {
        if(a[i]&&b[i])
            flag=true;
    }
    if((a[0]&&b[s-1]&&flag)||(a[0]&&a[s-1]))
        cout<<"YES"<<"\n";
    else
        cout<<"No"<<"\n";
}
