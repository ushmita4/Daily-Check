#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],r=0;
		for(int i=0;i<n;i++)cin>>a[i];
		while(!is_sorted(a,a+n)){
		for(int i=r%2;i<n-1;i+=2){
		    if(a[i]>a[i+1]){
		        swap(a[i],a[i+1]);
		    }
		}
		r++;
	}
	cout<<r<<endl;
	}
}
