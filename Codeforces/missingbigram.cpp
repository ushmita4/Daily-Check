#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
      ll n;
      cin>>n;
      string q;
      cin>>q;
      for(int i = 1 ; i< n-2 ; i++){
			string s;
			cin >> s;
			if(q[q.size()-1]==s[0])	q+=s[1];
			else	q+=s;
		}
		if(q.size()!=n)	q+=q[q.size()-1];

		cout<<q<<endl;
    }
    return 0;
}

