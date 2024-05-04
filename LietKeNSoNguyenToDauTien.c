#include <stdio.h>
#include <math.h>

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int t = 1, s = 0;
	while(n != s){
		if(prime(t)){
			printf("%d\n", t);
			++s;
		}
		++t;
	}
}
