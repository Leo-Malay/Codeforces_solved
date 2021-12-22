/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n, isp=0, temp;
	cin >> n;
	if(n % 2 == 0) cout << 0;
	else{
		while(n > 9){
			temp = n % 10;
			if(temp % 2 == 0) isp = 1;
			n/=10;
		}
		if(n % 2 == 0) cout << 1;
		else cout << ((isp == 1)?2:-1);
	}
	cout << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
