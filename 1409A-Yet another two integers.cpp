/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll a,b,mi=0, k=10;
	cin >> a >> b;
	a = abs(b-a);
	while(a > 0){
		if(k > a) k = a;
		if(a > 1 && k > 1){
			mi += a / k;
			a = a % k;
		}
		else{
			mi++;
			a -= k;
		}
	}
	cout << mi << endl;
}

int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}

