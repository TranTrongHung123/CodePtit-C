#include <stdio.h>
#include <math.h>

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(prime(n)) printf("YES\n");
		else printf("NO\n");
	}
}
