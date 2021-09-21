/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
#define toUpper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define toLower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
using namespace std;
void solve(){
	/* Enter your code here */
}
int main()
{
	//ll T;
    //cin >> T;
    //while(T--) solve();
    string s;
    cin >> s;
    ll up = 0, low = 0;
    f(i,0,s.length()){
    	if(s[i] - 0 <= 90) up++;
    	else low ++;
	}
	if(low >= up) {toLower(s);}
	else {toUpper(s);}
	cout << s << endl;
    return 0;
}
