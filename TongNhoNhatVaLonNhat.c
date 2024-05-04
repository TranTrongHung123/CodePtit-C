#include <stdio.h>
#include <math.h>
#define ll long long

ll max(ll n){
	ll cnt = 0, sum = 0, x = n;
	while(n){
		ll t  = 0;
		t = n%10;
		if(t == 5) sum += (long long)pow(10,cnt);
		++cnt;
		n /= 10;
	}
	return x+sum;
}

ll min(ll n){
	ll cnt = 0, sum = 0, x = n;
	while(n){
		ll t  = 0;
		t = n%10;
		if(t == 6) sum += (long long)pow(10,cnt);
		++cnt;
		n /= 10;
	}
	return x-sum;	
}

int main(){
	ll t;
	scanf("%d", &t);
	while(t--){
		ll x1, x2;
		scanf("%lld%lld", &x1, &x2);
		printf("%lld %lld\n", min(x1)+min(x2), max(x1)+max(x2));
	}
}
