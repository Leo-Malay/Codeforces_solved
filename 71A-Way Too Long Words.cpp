/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)

using namespace std;
void solve(){
	string s;
	cin >> s;
	if(s.length()> 10) cout << s[0] << s.length()-2 << s[s.length()-1] <<"\n";
	else cout << s<< "\n";
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
