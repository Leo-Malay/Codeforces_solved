/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, k, temp, i=0;
	cin >> n >> k;
	temp = (2*(240 - k))/5;
	while(i <= n && (i*(i+1)) <= temp) i++;
	cout << i-1;
	return 0;
}
