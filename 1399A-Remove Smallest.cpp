/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(){
	ll n, possible = 1;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	sort(arr, arr+n);
	for(int i=0;i<n-1;i++){
		if(abs(arr[i]-arr[i+1]) > 1){
			possible = 0;
			break;
		}
	}
	cout << ((possible==1)?"YES":"NO") << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}

