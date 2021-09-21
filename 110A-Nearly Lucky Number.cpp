/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
#define toUpper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define toLower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
void solve(){
	/* Enter your code here */
}
int main()
{
	ll T, temp, count = 0;
    cin >> T;
    //while(T--) solve();
    while(T > 0){
    	temp = T % 10;
    	T = T / 10;
    	if(temp == 4 || temp == 7) count++;
	}
	if(count == 4 || count == 7) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}
