#include<bits/stdc++.h>
#define int long long
using namespace std;
int const N=5000010;
int n,a[N],p[N],s[N],f[N];
signed main(){
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],p[a[i]]++;
	for(int i=1;i<N;i++)
		for(int j=i;j<N;j+=i)
			s[i]+=p[j];
	for(int i=N-1;i;i--){
		int t=0; 
		for(int j=i*2;j<N;j+=i)
			t=max(t,f[j]-s[j]*i);
		f[i]=s[i]*i+t;
	} 
	cout<<f[1]<<"\n";
}
