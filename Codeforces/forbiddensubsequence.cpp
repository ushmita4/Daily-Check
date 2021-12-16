#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    if(t=="abc") {
        if(s[0]!='a')
            {cout<<s<<"\n";
        return;
        }
        ll i,j;
        for(i=0;i<s.size()-1;i++)
            if(s[i]=='b')
            break;
        for(j=i;j<s.size()-1;j++)
        if(s[j]=='c')
        break;
        while(j<s.size()&&s[j]=='c') {
            swap(s[i],s[j]);
            i++;j++;
        }
    }
    cout<<s<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
