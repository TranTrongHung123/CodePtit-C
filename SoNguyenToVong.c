#include <stdio.h>
#include <math.h>

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int tn(int n){
	int s = 0;
	while(n){
		s = s*10 + n%10;
		n /= 10;
	}
	return s;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(prime(n) && prime(tn(n))) printf("1 ");
		else printf("0 ");
	}
}
