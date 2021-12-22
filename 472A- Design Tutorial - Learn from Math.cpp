/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int isComposite(ll n){
	for(int i=2;i<=n/2;i++){
		if(n % i == 0) return 1;
	}
	return 0;
}
int main()
{
	ll n;
	cin >> n;
	if(n % 2 == 0) cout << 4 << " " << n-4;
	else{
		ll a,b;
		a = n/2;
		b = a + 1;
		while(a > 4 && (isComposite(a) == 0 || isComposite(b) == 0)){
			a--;
			b++;
		}
		cout << a << " " << b;
	}
	cout << endl;
	return 0;
}
