/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin >> s;
	cout << s[0];
	for(int i=1;i<s.length()-1;i+=2){
		cout << s[i];
	}
	cout << s[s.length()-1] << endl;
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
