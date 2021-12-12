/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, zero=0, one=0;
	char s;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s == '0') zero++;
		else one++;
	}
	cout << abs(zero-one) << endl;
	return 0;
}

