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
    ll k,x,mid,s;
    cin>>k>>x;
    ll l=1,r=2*k-1;
    while (l<r){
			mid=(l+r)/2;
			if (mid<=k)
                s=(1+mid)*mid/2;
            else
                s=k*k-(k*2-mid-1)*(k*2-mid)/2;

			if (s>=x)
			r=mid;
			else
                l=mid+1;
		}
          cout<<r<<"\n";
}
}

