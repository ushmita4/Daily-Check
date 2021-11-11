#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int solve(){
  ll n;
  cin>>n;
  string c;
  cin>>c;
  ll a=0,b=0,i,an=n,bn=n;
  for(i=0;i<n*2;i++){
      if(c[i]=='1'){
          if(i%2==0)
          a++;
          else
          b++;
      }
      if(i%2==0) 
      an--;
        else 
        bn--;
        
        if(a>b+bn) return i+1;
        else if(b>a+an) return i+1;
  }
  return n*2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  ll t; cin>>t;
  while (t--){
    ll p=solve();
    cout<<p<<"\n";
  }
}
