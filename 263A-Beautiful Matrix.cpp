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
	ll temp, flag = 0;
	f(r,0,5){
		if(flag == 0) f(c,0,5){
			cin >> temp;
			if(temp == 1){
				flag = 1;
				cout << abs(2-r) + abs(2-c) << endl;
				break;
			}
		}
	}
    return 0;
}
