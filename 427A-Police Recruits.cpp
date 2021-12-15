/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
	ll n, crime=0, police=0, temp;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> temp;
		if(temp == -1){
			if(police == 0) crime++;
			else police--;
		}
		else police+=temp;
	}
	cout << crime << endl;
	return 0;
}

