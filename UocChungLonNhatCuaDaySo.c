#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
	while(b != 0){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll a[n];
		for(ll i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		printf("%lld ", a[0]);
		for(ll i = 0; i < n-1; i++){
			printf("%lld ", lcm(a[i],a[i+1]));
		}
		printf("%lld\n", a[n-1]);
	}
}
