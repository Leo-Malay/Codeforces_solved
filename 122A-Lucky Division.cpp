/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int solve(ll n, ll r){
	if(r > n) return 0;
	if(r > 2 && n % r == 0) return 1;
	r *= 10;
	return max(solve(n, r+4), solve(n, r+7));
}
int main()
{
	ll n;
	cin >> n;
	int p = solve(n, 0);
	cout << ((p == 1)?"YES":"NO") << endl;
	return 0;
}
