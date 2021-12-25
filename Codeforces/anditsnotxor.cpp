#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int t,l,r,s[N][20];
int main(){
	for(int i=1;i<N;i++)
		for(int j=0;j<20;j++)
			s[i][j]=s[i-1][j]+(i>>j&1);
	for(cin>>t;t;t--){
		cin>>l>>r;
		int ans=0;
		for(int i=0;i<20;i++)
			ans=max(ans,s[r][i]-s[l-1][i]);
		cout<<r-l+1-ans<<'\n';
	}
	return 0;
}
