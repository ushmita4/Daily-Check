#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t>0){
		string a,b;
		cin>>a>>b;
		int ma = 0;
		for(int i=0; i<b.length(); i++){
			for(int j=1; j<=b.length()-i; j++){
				int l = a.find(b.substr(i,j));
				if(l>=0){
					ma = max(ma,j);
				}
			}
		}
		cout<<a.length()+b.length()-2*ma<<endl;
		t--;
	}
	return 0;
}
