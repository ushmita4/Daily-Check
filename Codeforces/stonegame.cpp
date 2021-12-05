#include<iostream>
using namespace std;
 
int main(){
	long long int n,m,a,b,i,t,r;
	cin>>r;
	while(r--){
	cin>>n;
	for(i=1;i<n+1;i++){
		cin>>m;
		if(m==n) a=i;
		if(m==1) b=i; 
	}
	t=max(a,b);
	t=min(t,n-min(a,b)+1);
	t=min(t,min(a,b)+n-max(a,b)+1);
	cout<<t<<endl;
    }
}
