/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n, ma, b;
	cin >> n;
	ma = n / 2020;
	b = n - ma*2020;
	cout << ((ma >= b)?"YES":"NO") << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
