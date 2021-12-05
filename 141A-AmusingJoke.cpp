/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s1,s2,pile;
	ll letter[26] = {0}, isNeg = 0;
	cin >> s1 >> s2 >> pile;
	for(int i = 0;i<s1.size();i++){
		letter[int(s1[i])-65]++;
	}
	for(int i = 0;i<s2.size();i++){
		letter[int(s2[i])-65]++;
	}
	for(int i = 0;i<pile.size();i++){
		letter[int(pile[i])-65]--;
	}
	for(int i = 0;i<26;i++){
		if(letter[i] != 0){isNeg = 1;break;}
	}
	if(isNeg == 1) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
