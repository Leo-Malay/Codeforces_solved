/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(){
	ll n,k = 4;
	cin >> n;
	while(n % (k-1) != 0){
		k = k << 1;
	}
	cout << n / (k-1) << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
