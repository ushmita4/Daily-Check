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
      ll i,n,q;
      string s;
      cin>>n>>q>>s;
      while(q--){
        int l,r;
        cin>>l>>r;
        --l;
        --r;
        bool result=true;
        for(i=0;i<l and result;i++){
            if(s[i]==s[l])
                result=false;
        }
        for(i=r+1;i<n and result;i++){
            if(s[i]==s[r])
                result=false;
        }
        cout<<(result?"NO":"YES")<<'\n';
      }
    }
    return 0;
}


