/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){
	ll n, odd=0,even=0, temp, isIOdd=0;
	scanf("%lld", &n);
	for(int i=0;i<n;i++){
		scanf("%lld", &temp);
		if(isIOdd == 0){
			isIOdd = 1;
			if(temp % 2 != 0) odd++;
		}
		else{
			isIOdd = 0;
			if(temp % 2 == 0) even++;
		}
	}
	if(odd == even) printf("%lld\n", odd);
	else printf("-1\n");
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--) solve();
	return 0;
}
