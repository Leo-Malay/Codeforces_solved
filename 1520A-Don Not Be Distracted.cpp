/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){
	ll n;
	scanf("%lld", &n);
	string s;
	map<ll,ll> m;
	cin >> s;
	char temp = s[0];
	m[temp]++;
	ll isSus = 0;
	for(int i=1;i<n;i++){
		if(temp != s[i]){
			if(m[s[i]] != 0){
				isSus = 1;
				break;
			}
			else temp = s[i];
		}
		m[s[i]]++;
	}
	if(isSus == 1) printf("NO\n");
	else printf("YES\n");
	
}
int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--) solve();
	return 0;
}
