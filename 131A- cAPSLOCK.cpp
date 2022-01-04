/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
	string s;
	ll isAllCaps = 1,isInv = 1;
	cin >> s;
	if(s[0] <= 'Z' && s[0] >= 'A') isInv = 0;
	if(s[0] <= 'z' && s[0] >= 'a') isAllCaps = 0;
	for(int i=1;i<s.length();i++){
		if(s[i] <= 'z' && s[i] >= 'a'){
			isInv = 0;
			isAllCaps = 0;
			break;
		}
	}
	if(isAllCaps == 1 || isInv == 1){
		for(int i=0;i<s.length();i++){
			if(s[i] <= 'z' && s[i] >= 'a') s[i] = toupper(s[i]);
			else if(s[i] <= 'Z' && s[i] >= 'A') s[i] = tolower(s[i]);
			
		}
	}
	cout << s << endl;
	return 0;
}
