#include <stdio.h>
#include <math.h>
#define ll long long

ll scs(ll n){
	ll sum = 0;
	while(n){
		++sum;
		n /= 10;
	}
	return sum;
}

ll prime(ll n){
	for(ll i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int mark[100] = {0};
int main(){
	ll n;
	scanf("%lld", &n);
	ll t = scs(n);
	ll a[t];
	for(ll i = t-1; i >= 0; i--){
		a[i] = n%10;
		n /= 10;
	}
	for(ll i = 0; i < t; i++){
		++mark[a[i]];
	}
	for(ll i = 0; i < t; i++){
		if(prime(a[i]) && mark[a[i]] != 0){
			printf("%lld %lld\n", a[i], mark[a[i]]);
			mark[a[i]] = 0;
		}
	}
}
