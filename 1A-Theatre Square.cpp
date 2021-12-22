 /* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, m, a,i=1,j=1;
	cin >> n >> m >> a;
	if(n % a == 0)i = (n/a);
	else i = (n/a) + 1;
	if(m % a == 0)j = (m/a);
	else j = (m/a) + 1;
	cout << i*j << endl;
	return 0;
}
