/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){
	ll a, b, temp1, temp2;
	scanf("%lld%lld", &a, &b);
	temp1 = min(a,b);
	temp2 = max(a,b);
	if(2*temp1 >= temp2) printf("%lld\n", 4*temp1*temp1);
	else printf("%lld\n", temp2*temp2);
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--) solve();
	return 0;
}
