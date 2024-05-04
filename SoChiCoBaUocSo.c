#include <stdio.h>
#include <math.h>

long long prime[1000000];
void sieve(){
	for(long long i = 0; i <= 100000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(long long i = 2; i <= 1000; i++){
		for(long long j = i*i; j <= 1000000; j += i){
			prime[j] = 0;
		}
	}
}

int main(){
	sieve();
	int t;
	scanf("%d", &t);
	while(t--){
		long long L, R;
		scanf("%lld%lld", &L, &R);
		long long l = sqrt(L)+1, r = sqrt(R);
		long long cnt = 0;
		for(int i = l; i <= r; i++){
			if(prime[i]){
				++cnt;
			}
		}
		printf("%lld\n", cnt);
	}
}
