/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin >> n;
	if(n >= 0) cout << n << endl;
	else if(n > -10) cout << n/10;
	else{
		ll temp1, temp2;
		temp1 = n/10;
		temp2 = ((n/100)*10)+(n%10);
		if(temp1 < temp2) cout << temp2 << endl;
		else cout << temp1 << endl;
	}
	return 0;
}
