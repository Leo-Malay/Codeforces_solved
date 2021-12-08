/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll willRun = 0;
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			willRun = 1;
			break;
		}
	}
	cout << ((willRun == 1)?"YES":"NO") << endl;
	return 0;
}
