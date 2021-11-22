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
    ll x,y;
    cin>>x>>y;
    ll t=x+y;
    ll f=0;
    if((x%2)==0 && (y%2)==0)
    {
        f++;
        cout<<x/2<<" "<<y/2<<"\n";
    }

    if((x%2)!=0 && (y%2)!=0)
    {
        if(x>t/2)
        {
            f++;
        cout<<(t/2)-y<<" "<<y<<"\n";
        }
        else
        {

        f++;
            cout<<x<<" "<<(t/2)-x<<"\n";
        }
    }
    if(f==0)
        cout<<-1<<" "<<-1<<"\n";
}
}
