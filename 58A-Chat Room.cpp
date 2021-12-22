/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s, ref="hello";
	ll j = 0;
	cin >> s;
	for(int i=0;i<s.length();i++) if(s[i] == ref[j] && j < ref.length()) j++;
	cout << ((j == ref.length())?"YES":"NO") << endl;
	return 0;
}
