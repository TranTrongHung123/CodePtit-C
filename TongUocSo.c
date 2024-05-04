#include <stdio.h>
#include <math.h>
#define ll long long

ll prime[2000000];

void pt(){
	for(ll i = 2; i <= 2000000; i++){
		prime[i] = i;
	}
	for(ll i = 2; i <= sqrt(2000000); i++){
		for(int j = i*i; j <= 2000000; j += i){
			if(prime[j] == j){
				prime[j] = i;
			}
		}
	}
}

ll sum(ll n){
	ll s = 0;
	while(n != 1){
		s += prime[n];
		n /= prime[n];
	}
	return s;
}

int main(){
	pt();
	ll t;
	scanf("%lld", &t);
	ll s = 0;
	while(t--){
		ll n;
		scanf("%lld", &n);
		s += sum(n);
	}
	printf("%lld", s);
}
