/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,mi,ma,temp,count=0;
	cin >> n;
	cin >> temp;
	mi = temp;
	ma = temp;
	for(int i=1;i<n;i++){
		cin >> temp;
		if(temp < mi){
			count++;
			mi = temp;
		}
		else if(temp > ma){
			count++;
			ma = temp;
		}
	}
	cout << count << endl;
	return 0;
}
