#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
    int t;
cin>>t;
while(t--)
{ 
    int n;
cin>>n; 
int a[n];
for(int i=0;i<n;i++) 
cin>>a[i]; int ans=0;
for(int i=0;i<n;i++)
{ for(int j=i+1;j<n;j++)
{ if(__gcd(a[i],2*a[j])>1||__gcd(a[j],2*a[i])>1)
ans++;
}
    
} 
cout<<ans<<"\n"; 
    
}
}
