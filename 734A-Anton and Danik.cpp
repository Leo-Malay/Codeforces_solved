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
	ll T, A=0,D=0;
	char w;
    cin >> T;
    while(T--){
    	cin >> w;
    	if(w == 'A') A++;
    	if(w == 'D') D++;
	}
	if(A==D) cout << "Friendship" << endl;
	else if(A>D) cout << "Anton" << endl;
	else cout << "Danik" << endl;
    return 0;
}
