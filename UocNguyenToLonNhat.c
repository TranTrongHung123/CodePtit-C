#include <stdio.h>
#include <math.h>
long long pt(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if(n != 1) return n;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld", pt(n));
		printf("\n");
	}
}
