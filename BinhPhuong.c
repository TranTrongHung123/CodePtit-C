#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int N;
		scanf("%d", &N);
		long long s = (long long)N*N;
		printf("%lld\n", s);
	}
}
