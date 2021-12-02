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
      ll x1,x2,p1,p2;
      cin>>x1>>p1;
      cin>>x2>>p2;
      int mini=min(p1,p2);
      p1=p1-mini;
      p2=p2-mini;

      if(p1>=7)
        cout<<">"<<"\n";
      else if(p2>=7)
        cout<<"<"<<"\n";
      else{
        x1=x1*pow(10,p1);
        x2=x2*pow(10,p2);
        if(x1>x2)
          cout<<">"<<"\n";
        if(x1<x2)
          cout<<"<"<<"\n";
        if(x1==x2)
            cout<<"="<<"\n";
      }
      }
}

