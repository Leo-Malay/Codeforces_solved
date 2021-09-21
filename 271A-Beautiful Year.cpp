/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
#define toUpper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define toLower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;
int isUnique(ll year){
	ll a,b,c,d;
	a = year % 10;
	year /= 10;
	b = year % 10;
	year /= 10;
	c = year % 10;
	year /= 10;
	d = year % 10;
	year /= 10;
	if(a==b || a == c || a == d || b == c || b == d || c == d) return 0;
	return 1;
}
int main()
{
	ll T;
    cin >> T;
    //while(T--) solve();
    while(++T){
    	if(isUnique(T) == 1){
    		cout << T << endl;
    		break;
		}
	}
    return 0;
}
