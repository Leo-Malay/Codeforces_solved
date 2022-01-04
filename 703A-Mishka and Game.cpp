/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

void solve(){}

int main()
{
	ll n, a, b, m=0, c=0;
	scanf("%lld", &n);
	for(int i=0;i<n;i++){
		scanf("%lld%lld", &a, &b);
		if(a > b) m++;
		else if(b > a) c++;
	}
	if(m > c) printf("Mishka\n");
	else if(c > m) printf("Chris\n");
	else printf("Friendship is magic!^^\n");
	
}
