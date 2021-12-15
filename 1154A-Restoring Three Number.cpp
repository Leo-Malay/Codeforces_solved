/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	sort(arr, arr + 4);
	cout << arr[3] - arr[0] << " " << arr[3] - arr[1] << " " << arr[3] - arr[2] << endl;
	return 0;
}
