/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	while(n > 2 && n % 2 == 0){
		n = n >> 1;
	}
	cout << ((n%2==0)?"NO":"YES") << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
