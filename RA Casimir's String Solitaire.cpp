/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
#define toUpper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define toLower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;
void solve(){
	string s;
	ll a=0,b=0,c=0;
	cin >> s;
	f(i,0,s.length()){
		if(s[i] == 'A') a++;
		else if(s[i] == 'B') b++;
		else c++;
	}
	if(a+c == b) YES;
	else NO;
}
int main()
{
	ll T;
    cin >> T;
	while(T--) solve();
    return 0;
}
