#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
      ll a,b,c;
      cin>>a>>b>>c;
      ll mini=a+c;
      mini=mini-2*b;
      mini=abs(mini);
      if(mini%3==0)
        cout<<0<<"\n";
      else
        cout<<1<<"\n";
    }
    return 0;
}
