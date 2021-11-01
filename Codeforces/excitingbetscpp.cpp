#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		ll x, y ; cin>>x>>y ;
		ll k= abs(x-y) ;
		if(k==0)
		cout<<0<<" "<<0<<endl ;
		else
		cout<<k<<" "<<min(x%k, k-x%k)<<endl ;
	}
}

