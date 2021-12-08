/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, temp, count=1, ma, maxCount = 0;
	cin >> n;
	cin >> temp;
	ma = temp;
	for(int i=1;i<n;i++){
		cin >> temp;
		if(temp >= ma){
			count++;
		}
		else{
			maxCount = max(maxCount, count);
			count = 1;
		}
		ma = temp;
	}
	cout << max(maxCount, count) << endl;
	return 0;
}
