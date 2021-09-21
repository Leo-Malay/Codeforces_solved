/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define sort_vec(v) sort(v.begin(), v.end())

using namespace std;

int main()
{
	ll n,k,temp,total = 0;
    cin >> n >> k;
	ll myarr[n+1];
    f(i,0,n){
    	cin >> myarr[i];
	}
	temp = myarr[k-1];
	f(i,0,n){
    	if(temp <= myarr[i] && myarr[i] > 0) total += 1;
	}
	cout << total << endl;
    return 0;
}
