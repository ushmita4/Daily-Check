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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll i;
        for(i=0;i<k;i++)
        {
            if(s[i]!=s[n-i-1])
                break;
        }
        if(i==k && n>2*k)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
}
}
