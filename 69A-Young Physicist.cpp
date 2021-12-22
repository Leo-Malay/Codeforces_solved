/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, x=0, y=0, z=0, a,b,c;
	cin >> n;
	while(n--){
		cin >> a >> b >> c;
		x += a;
		y += b;
		z += c;
	}
	cout << ((x==0 && y==0 && z==0)?"YES":"NO") << endl;
	return 0;
}
