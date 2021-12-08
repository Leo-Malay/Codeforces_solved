/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, m, days = 0;
	cin >> n >> m;
	while(n > 0){
		n--;
		days++;
		if(days % m == 0) n++;
	}
	cout << days << endl;
	return 0;
}
