/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){
	ll n,ans=1000;
	scanf("%lld", &n);
	ll arr[n];
	for(int i=0;i<n;i++) scanf("%lld", &arr[i]);
	sort(arr, arr+n);
	for(int i=1;i<n;i++){
		ans = min(ans, abs(arr[i]-arr[i-1]));
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
