#include <stdio.h>
#include <math.h>

int check(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(sum % 5 == 0) return 1;
	return 0;
}

int prime[100001];
void sieve(){
	for(int i = 0; i < 100000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i < sqrt(100000); i++){
		for(int j = i*i; j < 100000; j += i){
			prime[j] = 0;
		}
	}
}

int main(){
	sieve();
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 5; i <= n; i++){
		if(prime[i] && check(i)){
			++cnt;
			printf("%d ", i);
		}
	}
	printf("\n%d", cnt);
}


