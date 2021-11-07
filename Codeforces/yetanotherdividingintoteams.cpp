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
        ll a[n];
        for(ll i=0;i<n;i++){
			cin>>a[i];
		}
        sort(a,a+n);
        ll ans=1;
        for(ll i=1;i<n;i++){
			if(a[i] == a[i-1]+1)
				ans = 2;
		}
        cout<<ans<<endl;
    }
}


