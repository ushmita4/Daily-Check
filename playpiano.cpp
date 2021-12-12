#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    while(n--)
    {
        string s;
        int k=0;
        cin>>s;
        for(int i=0;i<s.length()-1;i=i+2)
        {
            if(s[i]==s[i+1])
            {
                cout<<"no"<<endl;
                k=1;
                break;
            }
        
        }
        if(k!=1)
        cout<<"yes"<<endl;
    }
	return 0;
}
