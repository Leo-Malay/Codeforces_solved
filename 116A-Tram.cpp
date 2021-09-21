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
	ll T,a,b,curr_cap = 0,min_cap = 0;
    cin >> T;
    while(T--){
    	cin >> a >> b;
    	curr_cap += b - a;
    	if(curr_cap > min_cap) min_cap = curr_cap;
	}
	cout << min_cap << endl;
    return 0;
}
