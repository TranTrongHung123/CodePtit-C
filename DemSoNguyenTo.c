#include <stdio.h>
#include <math.h>

int prime[1000000];
void sieve(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		for(int j = i*i; j <= 1000000; j += i){
			prime[j] = 0;
		}
	}
}

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int check(int n){
	int s;
	while(n){
		s = 0;
		s += n%10;
		if(nt(s) == 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	sieve();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(prime[i] && check(i)){
				++cnt;
			}
		}
		printf("%d", cnt);
		printf("\n");
	}
}
