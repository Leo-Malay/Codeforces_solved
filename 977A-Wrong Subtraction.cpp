/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
using namespace std;
void solve(){
	/* Enter your code here */
}
int main()
{
	//ll T;
    //cin >> T;
    //while(T--) solve();
    ll n,k;
    cin >> n >> k;
    while(k--){
    	if(n % 10 == 0) n /= 10;
    	else n--;
	}
	cout << n << endl;
    return 0;
}
