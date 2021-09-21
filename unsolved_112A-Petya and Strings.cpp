/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)

using namespace std;
ll str_sum(string a, string b){
	ll tempa=0,tempb=0;
	f(i,0,a.length()){
		tempa += (ll)a[i];
		tempb += (ll)b[i];
	}
	return (tempa > tempb)?1:-1;
}
int main()
{
	ll flag = 0;
	string a,b;
	cin >> a >> b;
	f(i, 0, a.length()){
		if(a[i] == b[i] || toupper(a[i])== b[i] || a[i]== toupper(b[i])|| tolower(a[i])== b[i] || a[i]== tolower(b[i])){
		}
		else{
			flag = 1;
			cout << str_sum(a,b);
			break;
		}
	}
	if(flag == 0) cout << flag << endl;
    return 0;
}
