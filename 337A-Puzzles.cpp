/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, m;
	cin >> n >> m;
	ll arr[m];
	for(int i=0;i<m;i++) cin >> arr[i];
	sort(arr, arr+ (sizeof(arr)/sizeof(arr[0])));
	ll mi = arr[n-1] - arr[0];
	for(int i=1;i<m-n+1;i++){
		mi = min(mi, arr[i+n-1] - arr[i]);
	}
	cout << mi << endl;
	return 0;
}
