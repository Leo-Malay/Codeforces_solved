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
    ll a,b,count = 0;
    cin >> a >> b;
    while(a <= b){
    	a *= 3;
    	b *= 2;
    	count++;
	}
    cout << count << endl;
    return 0;
}
