/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll x,n,m;
	cin >> x >> n >> m;
	while(x > 20 && n > 0){
		x = (x/2) + 10;
		n--;
	}
	while(x > 0 && m > 0){
		x -= 10;
		m--;
	}
	if(x > 0) cout << "NO" << endl;
	else cout << "YES" << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}

