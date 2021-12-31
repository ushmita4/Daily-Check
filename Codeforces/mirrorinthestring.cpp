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
      ll n;
      cin>>n;
      string s;
      cin>>s;
      string k="",d="";
      k=k+s[0];
      for(int i=1;i<n;i++)
      {
          if(s[i]==s[i-1]&&i!=1)
            k=k+s[i];
          else
          {
              if(s[i]<s[i-1])
                k+=s[i];
			else
			break;
          }
      }
      d=k;
      reverse(d.begin(),d.end());
      k=k+d;
      cout<<k<<"\n";
    }
    return 0;
}

