/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)

using namespace std;
void solve(){
	/* Enter your code here */
}
int main()
{
	ll T,a,b,c,total=0;
    cin >> T;
    while(T--){
    	cin >> a >> b >> c;
    	if(a+b+c >= 2) total += 1;
	}
	cout << total << endl;
    return 0;
}
