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
        ll n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                flag++;
                break;
            }
        }
        if(flag>0)
            cout<<"YES"<<'\n';

        else cout<<"NO"<<'\n';
    }
}


