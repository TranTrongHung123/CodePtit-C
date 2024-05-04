#include <stdio.h>
#include <math.h>
#define ll long long

void sort(ll a[], ll n){
	for(ll i = 0; i < n-1; i++){
		for(ll j = i+1; j < n; j++){
			if(a[i] > a[j]){
				ll tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

ll find(ll a[], ll n){
	for(ll i = n-1; i >= 2; i--){
		ll l = 0;
		ll r = i-1;
		while(l < r){
			if(a[l] + a[r] == a[i]) return 1;
			else if(a[l] + a[r] < a[i]) ++l;
			else --r;
		}
	}
	return 0;
}

int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll a[n];
		for(ll i = 0; i < n; i++){
			ll x;
			scanf("%lld", &x);
			a[i] = x*x;
			
		}
		sort(a,n);
		if(find(a,n) == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
