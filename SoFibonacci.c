#include <stdio.h>

void fibo(int n){
	long long a[n];
	a[1] = 1;
	a[2] = 1;
	for(int i = 3; i <= n; i++){
		a[i] = a[i-1] + a[i-2];
 	}
 	printf("%lld", a[n]);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		fibo(n);
		printf("\n");
	}
}
