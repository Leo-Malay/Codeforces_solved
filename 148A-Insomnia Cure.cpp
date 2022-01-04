/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll k,l,m,n,d, sol = 0;
	scanf("%lld%lld%lld%lld%lld", &k, &l, &m, &n, &d);
	for(int i=1;i<=d;i++){
		if(i % k == 0) sol++;
		else if(i % l == 0) sol++;
		else if(i % m == 0) sol++;
		else if(i % n == 0) sol++;
	}
	printf("%lld\n", sol);
	return 0;
}
