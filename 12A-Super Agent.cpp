/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define el "\n"
using namespace std;

int main()
{
	string s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	if(s2[0] == s2[2]){
		ll isS = 1;
		for(int i=0;i<s1.length();i++){
			if(s1[i] != s3[s3.length()-i-1]){
				isS=0;
				break;
			}
		}
		if(isS == 1) cout << "YES" << el;
		else cout << "NO" << el;
	}
	else cout << "NO" << el;
	return 0;
}


