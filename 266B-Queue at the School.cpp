/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll n, t;
	string s;
	scanf("%lld%lld", &n , &t);
	cin >> s;
	while(t--){
		ll i=0;
		while(i < n-1){
			if(s[i] == 'B' && s[i+1] == 'G'){
				char temp = s[i+1];
				s[i+1] = s[i];
				s[i] = temp;
				i+=2;
			}
			else i+=1;
		}
	}
	cout << s;
	return 0;
}
