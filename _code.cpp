/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n, round = 1;
	cin >> n;
	while(n > 9){
		if(n%10 != 0){
			round=0;
			break;
		}
		n /= 10;
	}
	cout << (()?:"")
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
