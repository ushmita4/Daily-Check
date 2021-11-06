#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a , b , c ;
        cin >> a >> b >> c;
        int d,e,f,g,h;
        cin>>d>>e>>f>>g>>h;
        if(d<=a and e<=b and f<=c and f+d+g<=a+c and f+e+h<=b+c and d+e+f+g+h<=a+b+c )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
