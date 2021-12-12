/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string str1 = "qwertyuiop", str2 = "asdfghjkl;", str3 = "zxcvbnm,./", s, d;
	ll shift;
	size_t f;
	cin >> d;
	cin >> s;
	if(d[0] == 'L') shift = 1;
	else shift = -1;
	for(int i=0;i<s.length();i++){
			f = str1.find(s[i]);
			if(f != -1) cout << str1[f+shift];
			else{
				f = str2.find(s[i]);
				if(f != -1) cout << str2[f+shift];
				else{
					f = str3.find(s[i]);
					if(f != -1) cout << str3[f+shift];
				}
			}
		}
	return 0;
}

