/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
	ll k, arr[12], count = 0;
	cin >> k;
	for(int i=0;i<12;i++) cin >> arr[i];
	if(k != 0){
		sort(arr, arr + 12);
		for(int i=11;i>=0;i--){
			if(k > 0) k -= arr[i];
			else break;
			count++;
		}
		cout << ((k > 0)?-1:count) << endl;
	}
	else cout << 0 << endl;
	return 0;
}

