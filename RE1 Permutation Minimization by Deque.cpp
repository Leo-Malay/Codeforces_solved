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
	ll n,temp;
	cin >> n;
	ll arr[(2*n) + 1], mini = n,c=n, d=n+1;
	f(i, 0, n){
		cin >> temp;
		if(mini > temp){
			mini = temp;
			arr[c] = temp;
			c--;
		}
		else{
			arr[d] = temp;
			d++;
		}
	}
	f(j,c+1,d) cout << arr[j] << " ";
	cout << endl;
}
int main()
{
	ll T;
    cin >> T;
	while(T--) solve();
    return 0;
}
