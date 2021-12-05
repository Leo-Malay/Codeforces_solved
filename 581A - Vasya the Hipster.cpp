/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a, b, count = 0;
	cin >> a >> b;
	if(a <= b){
		cout << a << " ";
		b -= a;
		cout << b/2 << endl;
	}
	else{
		cout << b << " ";
		a -= b;
		cout << a/2 << endl;
	}
	return 0;
}
