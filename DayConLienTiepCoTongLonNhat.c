#include <stdio.h>
#define ll long long

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
		ll sum1 = 0, sum2 = 0;
		for(ll i = 0; i < n; i++){
			sum1 += a[i];
			if(sum1 < 0) sum1 = 0;
			if(sum1 > sum2) sum2 = sum1;
		}
		printf("%lld\n", sum2);
	}
}
