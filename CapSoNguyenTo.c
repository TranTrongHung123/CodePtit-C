//Su dung sang so nguyen to kiem tra xem i v� n-i c� phai so nguyen to khong 

#include <stdio.h>
#include <math.h>
int prime[1000000];
void sieve(){
	for(int i = 0; i <= 10000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 100; i++){
		for(int j = i*i; j <= 10000; j += i){
			prime[j] = 0;
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	sieve();
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 2; i <= n/2 ; i++){
			if(prime[i] && prime[n-i]){
				printf("%d %d ", i, n-i);
			}
		}
		printf("\n");
	}
}

