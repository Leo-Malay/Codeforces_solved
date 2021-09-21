/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i, a, b) for (int i = a; i < b; i++)
// Vectors
#define vec_sort(v) sort(v.begin(), v.end())
#define vec_pop_front(v) v.erase(v.begin(), v.begin())
using namespace std;
int main()
{
	string s;
	ll one=0, two=0, three=0;
	cin >> s;
	f(i,0,s.length()){
		switch(s[i]){
			case '1':
				one++;
				break;
			case '2':
				two++;
				break;
			case '3':
				three++;
				break;
		}
	}
	while(one || two || three){
		if(one) {cout << "1";one--;}
		else if(two) {cout << "2";two--;}
		else if(three) {cout << "3";three--;}
		if(one || two || three) cout << "+";
	}
    return 0;
}
