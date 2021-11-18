#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t; 
 while(t--){
  long long n;
  cin>>n;
  long long a[n+1],ans;
  for(int i=1;i<=n;i++){
   cin>>a[i];
  }
  sort(a+1,a+n+1);
  ans=a[1];
  for(int i=2;i<=n;i++){
  ans=max(ans,a[i]-a[i-1]);
 }
 cout<<ans<<endl;
 }
}
