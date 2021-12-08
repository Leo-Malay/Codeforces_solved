/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s;
	char curr;
	ll count = 0, isD = 0;
	cin >> s;
	curr = s[0];
	for(int i=0;i<s.length();i++){
		if(curr == s[i]) count++;
		else{
			count = 1;
			curr = s[i];
		}
		if(count >= 7){
			isD = 1;
			break;
		}
	}
	cout << ((isD == 1)?"YES":"NO")<< endl;
	return 0;
}
