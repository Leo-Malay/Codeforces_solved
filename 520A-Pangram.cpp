/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n, res[26] = {0}, count = 0;
	string s;
	cin >> n >> s;
	if(n>=26){
		transform(s.begin(),s.end(),s.begin(),::tolower);
		for(int i=0;i<n;i++){
			res[int(s[i])-97] = 1;
		}
		for(int i=0;i<26;i++){
			count += res[i];
		}
		if(count==26) cout << "YES" << endl;
		else cout << "NO" << endl;
	}else cout << "NO" << endl;
	return 0;
}
