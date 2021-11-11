#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isSquare(ll x){
  ll y=sqrt(x);
  return y*y==x;
}

void solve(){
  ll n;
  cin>>n;
  if (n%2==0 && isSquare(n/2))
    cout<<"YES"<<endl;
  else if (n%4==0 && isSquare(n/4))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  ll t; cin>>t;
  while (t--)
    solve();
}
