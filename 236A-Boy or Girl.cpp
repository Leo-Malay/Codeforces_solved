/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
#define arr_sort(a) sort(a, a + (sizeof(a) / sizeof(a[0])))
#define arr_len(a) sizeof(a) / sizeof(a[0])
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
    int arr[26] = {0}, sum = 0;
    f(i,0,s.length()){
    	int n = s[i] - 97;
    	if(arr[n] == 0) sum += 1;
		arr[n] = 1;
	}
    if(sum % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}
