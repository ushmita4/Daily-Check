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
      ll n,ans=1;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(ll i=0;i<n;i++)
      {
          for(ll j=i+1;j<n;j++)
          {
              ll res=0;
              for(ll k=0;k<n;k++)
              {
                  if(k==i||k==j || (a[k]-a[i])*(k-j) == (a[k]-a[j])*(k-i))
                    res++;
              }
              ans = max(ans,res);
          }
      }
      cout << n - ans << "\n";
    }
    return 0;
}

