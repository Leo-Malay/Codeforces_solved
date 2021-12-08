/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, sum = 0, total = 0, count = -1;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	sum = sum/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				ll temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		total += arr[n-i-1];
		if(total > sum){
			count = i+1;
			break;
		}
	}
	cout << ((count == -1)?n:count) << endl;
	
	return 0;
}
