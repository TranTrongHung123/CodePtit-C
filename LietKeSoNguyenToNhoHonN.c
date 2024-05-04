#include <stdio.h>
#include <math.h>

void sieve(int n){
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = 1;
	}
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i <= sqrt(n); i++){
		for(int j = i*i; j < n; j += i){
			a[j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 1) printf("%d\n", i);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	sieve(n);
}
