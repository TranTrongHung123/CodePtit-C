#include <stdio.h>
#include <math.h>
#define ll long long

ll prime(ll n){
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll l, r, cnt = 0;
		scanf("%lld%lld", &l, &r);
		ll L = sqrt(l);
		ll R = sqrt(r);
		if(L*L != l) ++L;
		for(ll i = L; i <= R; i++){
			if(prime(i)) ++cnt;
		}
		printf("%lld\n", cnt);
	}
}
