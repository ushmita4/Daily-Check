#include <iostream>
using namespace std;
#define ll long long int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	int sc1 = 0, sc2 = 0, l1 = 0, l2 = 0;
	for(ll i = 0; i < n; i++){
		ll x,y; cin >> x >> y;
		sc1 += x;
		sc2 += y;
		if(sc1 > sc2) l1 = max(l1, sc1 - sc2);
		else l2 = max(l2, sc2 - sc1);
	}
	if(l1 > l2)
		cout << "1 " << l1 << '\n';
	else 
		cout << "2 " << l2 << '\n';
	return 0;
}
