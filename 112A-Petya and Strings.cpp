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
void solve(){
	/* Enter your code here */
}
int main()
{
	ll flag = 0;
	string a,b;
	cin >> a >> b;
	toLower(a);
	toLower(b);
	f(i, 0, a.length()){
		if(a[i] == b[i]){
		}
		else{
			flag = 1;
			if(a[i] - '0' > b[i] - '0') cout << 1 << endl;
			else cout << -1 << endl;
			break;
		}
	}
	if(flag == 0) cout << flag << endl;
    return 0;
}
