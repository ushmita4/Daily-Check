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
      ll a[n];
      for(ll i=0;i<n;i++)
        cin>>a[i];
      ll h=1+a[0];
      for(ll i=1;i<n;i++)
      {
          if(a[i]==1 && a[i-1]==1)
            h=h+5;
          else
          {
              if(a[i]==1)
                h++;
              if(a[i]==0 && a[i-1]==0)
              {
                  h=-1;
                  break;
              }
          }
      }
      cout<<h<<"\n";
}
}


