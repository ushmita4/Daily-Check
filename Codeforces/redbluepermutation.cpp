#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<int> a(n+1);
        vector<int> b,r;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<=n;i++)
        {
        char x;
        cin>>x;
        if(x=='B')
        b.push_back(a[i]);
        else
        r.push_back(a[i]);
        }
        ll cur=1;
        sort(b.begin(),b.end());
        sort(r.begin(),r.end());
        
        bool ans=true;
        for(ll i:b)
        {
            if(i>=cur)
            cur++;
            else
            {
                ans=false;
                break;
            }
        }
        for(ll i:r)
        {
            if(i<=cur)
            cur++;
            else
            {
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
}
