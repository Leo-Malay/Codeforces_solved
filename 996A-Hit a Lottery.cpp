/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, deno[]={1,5,10,20,100}, count=0;
	cin >> n;
	for(int i=(sizeof(deno)/sizeof(deno[0]))-1;i>=0;i--){
		count += n / deno[i];
		n = n % deno[i];
	}
	cout << count << endl;
	
	return 0;
}
