/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{
	ll T,x=0;
	string s;
    cin >> T;
    while(T--){
    	cin >> s;
    	if(s == "X++" || s == "++X") x += 1;
    	else x -= 1;
	}
	cout << x << endl;
    return 0;
}
