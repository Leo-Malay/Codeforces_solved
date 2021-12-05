/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		if(i % 2 == 0) for(int j=0;j<m;j++) cout << "#";
		else{
			if((i+1) % 4 == 0){
				cout << "#";
				for(int j=0;j<m-1;j++) cout << ".";
			}
			else{
				for(int j=0;j<m-1;j++) cout << ".";
				cout << "#";
			}
		}
		cout << endl;
	}
	return 0;
}
