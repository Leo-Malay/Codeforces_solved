/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(int i=a;i<b;i++)
#define vec_sort(v) sort(v.begin(),v.end())
#define Asort(a) sort(a,a+(sizeof(a)/sizeof(a[0])))
#define Alen(a) sizeof(a)/sizeof(a[0])
#define Afill(a,val) f(i,0,Alen(a)) a[i]=val
#define Afill2d(a,val) f(i,0,Alen(a))f(j,0,Alen(a[i])) a[i][j]=val
#define Aprint(a) f(i,0,1){f(j,0,Alen(a)){cout<<a[j]<<" ";}cout<<endl;}
#define Aprint2d(a) f(i,0,Alen(a)){f(j,0,Alen(a[i])){cout<<a[i][j]<<" ";}cout<<endl;}
#define toUpper(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define toLower(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
using namespace std;
ll gcd(ll ax, ll by){if(by == 0){return ax;}gcd(by, ax % by);}
ll lcm(ll ax, ll by){return (ax * by)/gcd(ax,by);}
ll arr_find(ll arr[], ll val){f(i, 0, Alen(arr)){if(arr[i] == val){return arr[i];}}return -1;}
void solve(){
	/* Enter your code here */
}
int main()
{
	//ll T;
    //cin >> T;
	//while(T--) solve();
	ll n, max_pos = 0, min_pos = 0;
	cin >> n;
	ll arr[n];
	cin >> arr[0];
	f(i, 1, n){
		cin >> arr[i];
		if(arr[max_pos] < arr[i]) max_pos = i;
		else if(arr[min_pos] >= arr[i]) min_pos = i;
	}
	if(min_pos> max_pos) cout << max_pos + n - min_pos - 1 << endl;
	else cout << max_pos + n - min_pos - 2 << endl;
    return 0;
}
