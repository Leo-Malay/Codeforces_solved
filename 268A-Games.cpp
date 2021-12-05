/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

struct uniform{
	ll home;
	ll guest;
};

int main()
{
	ll n, count = 0;
	cin >> n;
	struct uniform u[n];
	for(int i=0;i<n;i++){
		cin >> u[i].home >> u[i].guest;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(u[i].home == u[j].guest) count++;
			if(u[j].home == u[i].guest) count++;
		}
	}
	
	cout << count;
	return 0;	
}
