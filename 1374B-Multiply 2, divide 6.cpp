/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,count=0, total;
	cin >> n;
	while(n > 1 && n % 3 == 0){
		n = n / 3;
		count++;
	}
	total = count;
	while(n > 1 && count > 0 && n % 2 == 0){
		n = n / 2;
		count--;
	}
	while(count != 0){
		count--;
		total++;
	}
	cout << ((n == 1)?total:-1) << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
