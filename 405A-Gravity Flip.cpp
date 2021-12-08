/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	sort(arr, arr + (sizeof(arr)/sizeof(arr[0])));
	for(int i=0;i<n;i++) cout <<  arr[i] << " ";
	cout << endl;
	return 0;
}
