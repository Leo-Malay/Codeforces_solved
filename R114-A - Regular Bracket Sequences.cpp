/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
using namespace std;
void solve(){
	int n,t=0;
	cin >> n;
	while(t<n){
		f(i,0,n-t) cout << "(";
		f(i,0,n-t) cout << ")";
		f(i,0,t) cout << "()";
		t++;
		cout << endl;
	}
}
int main()
{
	ll T;
    cin >> T;
    while(T--){
    	solve();
	}
    return 0;
}
