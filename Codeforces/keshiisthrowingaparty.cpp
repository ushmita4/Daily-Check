#include<cstdio>
int t,n,i,a[200001],b[200001],ans,l,r,m;
int check(int x){
	int k=0,i;
	for(i=1;i<=n;i++)if(k<=b[i]&&x-k-1<=a[i])k++;
	return k>=x;
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++)scanf("%d%d",&a[i],&b[i]);
		l=1;r=n;
		while(l<=r){
			m=l+r>>1;
			if(check(m))ans=m,l=m+1;else r=m-1;
		}
		printf("%d\n",ans);
	}
}
