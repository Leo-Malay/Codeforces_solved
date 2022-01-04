/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){
	ll n, min_a, min_b;
	scanf("%lld", &n);
	ll a[n], b[n];
	// Taking Input A;
	scanf("%lld", &a[0]);
	min_a = a[0];
	for(int i=1;i<n;i++){
		scanf("%lld", &a[i]);
		min_a = min(min_a, a[i]);
	}
	// Taking Input B;
	scanf("%lld", &b[0]);
	min_b = b[0];
	for(int i=1;i<n;i++){
		scanf("%lld", &b[i]);
		min_b = min(min_b, b[i]);
	}
	// Calculating moves.
	ll ans = 0;
	for(int i=0;i<n;i++){
		if(a[i] > min_a && b[i] > min_b){
			ll temp = min(a[i] - min_a, b[i] - min_b);
			ans += temp;
			a[i] -= temp;
			b[i] -= temp;
		}
		ans += a[i] - min_a;
		ans += b[i] - min_b;
	}
	printf("%lld\n", ans);
	
}
int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--) solve();
	return 0;
}
