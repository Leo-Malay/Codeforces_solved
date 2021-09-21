/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
#define vec_sort(v) sort(v.begin(), v.end())
using namespace std;
void solve(){
	/* Enter your code here */
}
int main()
{
	ll T, temp=0;
	string s,temp_s="";
    cin >> T;
    cin >> s;
    while(T--){
    	if(s[temp] != s[temp+1]){
    		temp_s += s[temp];
		}
		temp++;
	}
	cout << s.size() - temp_s.size();
    return 0;
}
