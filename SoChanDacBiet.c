#include <stdio.h>

int check(long long n){
	while(n != 0){
		int s = 0;
		s += n%10;
		if(s % 2 != 0) return 0;
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
