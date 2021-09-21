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
	ll T,steps = 0, curr = 5;
    cin >> T;
    //while(T--) solve();
    while(T>0){
    	if(T<curr) curr--;
    	else {T-=curr;steps++;}
	}
	cout << steps << endl;
    return 0;
}
