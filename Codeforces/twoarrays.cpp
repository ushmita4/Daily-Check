#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b) for(int i=a;i<b;i++)
int t,n,a[103],b[103]; 
int main(){
	cin>>t;
	while(t--){
		cin>>n;bool f=0;
		fr(i,0,n)cin>>a[i];
		fr(i,0,n)cin>>b[i];
		sort(a,a+n);sort(b,b+n);
		fr(i,0,n)
			if(b[i]-a[i]!=1&&b[i]!=a[i]){cout<<"NO"<<endl;f=1;break;}
		if(!f)cout<<"YES"<<endl;
	}
	return 0;
}
