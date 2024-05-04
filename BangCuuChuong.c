#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= 10; i++){
		long long s = (long long)n*i;
		printf("%lld ", s);
	}
}
