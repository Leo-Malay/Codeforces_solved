/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll k, r, count;
	cin >> k >> r;
	count = k;
	while((count - r) % 10 != 0 && count % 10 != 0){
		count += k;
	}
	cout << count / k << endl;
	return 0;
}
