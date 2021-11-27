#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
#define fl1(i,a,b) for(int i=a; i<b; ++i)
#define fl2(i,a,b) for(int i=a; i<=b; ++i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll c=0;
        fl1(i,0,n)
        {
            cin>>a[i];
        }
        fl1(i,0,n-1)
        {
            if(a[i]>a[i+1])
            c++;
        }
        if(c==0)
        cout<<"YES"<<"\n"<<0<<"\n";
        else
        {
            if(c==1 && a[n-1]<=a[0])
            cout<<"YES"<<"\n"<<1<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        
}
}
