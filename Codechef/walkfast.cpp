#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int n,a,b,c,d,p,q,y;
	cin>>n>>a>>b>>c>>d>>p>>q>>y;
	int i,f[n];
	for(i=0;i<n;i++)
	    cin>>f[i];
	int walktime,time2=0;
	walktime=abs(f[b-1]-f[a-1])*p;
	if(abs(f[c-1]-f[a-1])*p<=y)//can catch the train
	{
	    time2=y+abs(f[d-1]-f[c-1])*q+abs(f[b-1]-f[d-1])*p;
	}
	else
	    time2=-1;
	if(time2==-1)
	    cout<<walktime<<endl;
	else if(time2<walktime)
	    cout<<time2<<endl;
	else
	    cout<<walktime<<endl;
    }
	return 0;
}
