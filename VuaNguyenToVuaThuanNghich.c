#include <stdio.h>
#include <math.h>

int prime[1000000];
void sieve(){
	for(int i = 0; i < 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		for(int j = i*i; j <= 1000000; j += i){
			prime[j] = 0;
		}
	}
}

int tn(int n){
	int s = 0, a = n;
	while(n){
		s = s*10 + n%10;
		n /= 10;
	}
	if(s == a) return 1;
	return 0;
}

int main(){
	sieve();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		if(a < b){
			for(int i = a; i <= b; i++){
				if(prime[i] == 1 && tn(i)){
					++cnt;
					printf("%d ",i);
					if(cnt % 10 == 0) printf("\n");
				}
			}
		}
		printf("\n");
	}
}
