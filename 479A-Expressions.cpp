/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	ll arr[3], sol = 1;
	scanf("%lld%lld%lld", &arr[0], &arr[1], &arr[2]);
	if(arr[0] == 1){
		sol += arr[1];
		if(arr[2] == 1) sol += arr[2];
		else sol *= arr[2];
	}
	else if(arr[2] == 1){
		sol += arr[1];
		if(arr[0] == 1) sol += arr[0];
		else sol *= arr[0];
	}
	else if(arr[1] == 1) sol = (min(arr[0], arr[2]) + arr[1]) * max(arr[0], arr[2]);
	else sol = arr[0] * arr[1] * arr[2];
	printf("%lld\n", sol);
	return 0;
}
