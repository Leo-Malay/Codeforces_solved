/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string s;
	int i = 0, space = 0;
	cin >> s;
	while(i+2 < s.length()){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			if(space == 1){
				cout << " ";
				space = 0;
			}
			i+=3;
		}
		else{
			cout << s[i];
			i++;
			space = 1;
		}
	}
	while(i < s.length()){
		cout << s[i];
		i++;
	}
	return 0;
}
