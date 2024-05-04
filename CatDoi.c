#include <stdio.h>
#include <math.h>
#define ll long long

ll check1(ll n){
	while(n){
		ll t = 0;
		t = n%10;
		if(t != 0 && t != 1 && t != 8 && t != 9) return 0;
		n /= 10;
	}
	return 1;
}

ll check2(ll n){
	ll sum = 0, cnt = 0;
	while(n){
		int t = 0;
		t = n%10;
		if(t == 0 || t == 8 || t == 9) sum += 0;
		if(t == 1) sum += (long long)pow(10,cnt);
		++cnt;
		n /= 10;
	}
	return sum;
}

int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(check1(n) == 0 || check2(n) == 0) printf("INVALID\n");
		else{
			printf("%lld\n", check2(n));
		}
	}
}
