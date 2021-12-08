/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, k, temp;
	cin >> n >> k;
	temp = (n+1)/2;
	if(temp >= k){
		cout << 1 + (k-1)*2 << endl;
	}
	else{
		cout << 2 + (k-temp-1)*2 << endl;
	}
	
	return 0;
}
