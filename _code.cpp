/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n, a, b, temp = 97, count = 0;
	string s = "";
	cin >> n >> a >> b;
	while(n--){
		s += char(temp);
		temp++;
		count++;
		if(temp >= 97 + b) temp -= b;
		if(count >= a){
			count=0;
			temp = 97;
		}
	}
	cout << s << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
