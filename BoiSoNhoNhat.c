#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
	if(b == 0) return a;
	else return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

int main(){
	ll t;
	scanf("%lld", &t);
	while(t--){
		ll n, m;
		scanf("%lld%lld", &n, &m);
		ll tmp = n;
		for(ll i = n+1; i <= m ; i++){
			tmp = lcm(tmp,i);
		}
		printf("%lld\n", tmp);
	}
}
