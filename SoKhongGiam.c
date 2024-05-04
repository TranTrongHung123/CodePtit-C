#include <stdio.h>

long long check(long long n){
	while(n != 0){
		int s = n%10;
		if(s < ((n/10)%10)) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
