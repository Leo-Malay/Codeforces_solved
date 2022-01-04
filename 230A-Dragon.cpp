/* Malay Bhavsar (LeoMalay) */
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
struct d{
	ll x;
	ll y;
};
int main()
{
	ll s,n;
	scanf("%lld%lld", &s, &n);
	struct d arr[n];
	for(int i=0;i<n;i++){
		scanf("%lld%lld", &arr[i].x, &arr[i].y);
	}
	// Sorting
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j].x > arr[j+1].x){
				struct d temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	ll fail = 0;
	for(int i=0;i<n;i++){
		if(arr[i].x >= s){
			fail = 1;
			break;
		}
		else s += arr[i].y;
	}
	if(fail == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
