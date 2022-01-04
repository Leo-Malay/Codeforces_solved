/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b,a%b);
}
int main()
{
	ll y,w,b=6;
	cin >> y >> w;
	y = 7 - max(y,w);
	w = gcd(b, y);
	cout << y/w << "/" << b/w << el;
	return 0;
}


