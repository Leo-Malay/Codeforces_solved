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
	/* Enter your code here */
}
int main()
{
	//ll T;
    //cin >> T;
    //while(T--) solve();
    string a,b;
    cin >> a;
    cin >> b;
    reverse(b.begin(), b.end());
    if(a == b) YES;
    else NO;
    
    return 0;
}
