/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m,a,b, sum=0;
	cin >> n >> m >> a >> b;
	sum += b * (n/m);
	n %= m;
	sum += n * a;
	cout << sum << endl;
	return 0;
}

