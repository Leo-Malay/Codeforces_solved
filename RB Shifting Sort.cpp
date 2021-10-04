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
	ll n;
	cin >> n;
	ll arr[n];
	f(i,0,n) cin >> arr[i];
	ll start = 0, c=0, res[n][2];
	while(start < n){
		ll end = n-1;
		while(start < end){
			if(arr[start] > arr[end]){
				res[c][0] = start;
				res[c][1] = end;
				c++;
				ll temp = arr[end];
				for(int i=end;i>start;i--)
				{
					arr[i] = arr[i-1];
				}
				arr[start] = temp;
			}
			else end--;
		}
		start++;
	}
	cout << c << endl;
	f(i,0,c) cout << res[i][0]+1 << " " << res[i][1]+1 << " " << res[i][1] - res[i][0] << endl;
}
int main()
{
	ll T;
    cin >> T;
	while(T--) solve();
    return 0;
}
