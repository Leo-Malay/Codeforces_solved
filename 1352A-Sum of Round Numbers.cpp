/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n, temp, i=1,v[10],z=0;
	cin >> n;
	while(n > 1){
		temp = n % 10;
		if(temp != 0){
			v[z] = (temp * i);
			z++;
		}
		i*=10;
		n /= 10;
		
	}
	if(n == 1){
		v[z] = i;
		z++;
	}
	cout << z << endl;
	for(int j=0;j < z;j++){
		cout << v[j] << " ";
	}
	cout << endl;
	
}
int main()
{
	ll t;
	cin >> t;
	while(t--) solve();
	return 0;
}
