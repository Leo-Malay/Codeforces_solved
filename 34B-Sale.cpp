/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m, earn=0;
	cin >> n >> m;
	ll arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	sort(arr, arr + n);
	for(int i=0;i<n;i++){
		if(arr[i]<0 && m > 0){
			earn += arr[i]*(-1);
			m--;
		}
		else break;
	}
	cout << earn << endl;
	return 0;
}

