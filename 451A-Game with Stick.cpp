/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a, b, win = 0;
	cin >> a >> b;
	a = min(a,b);
	if(a % 2 != 0) cout << "Akshat" << endl;
	else cout << "Malvika" << endl;
	return 0;
}
