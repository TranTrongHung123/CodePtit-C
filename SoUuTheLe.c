#include <stdio.h>

int check(long long n){
	int cnt_c = 0, cnt_l = 0;
	while(n != 0){
		int s = 0;
		s += n%10;
		if(s % 2 == 0) ++cnt_c;
		else ++cnt_l;
		n /= 10;
	}
	if(cnt_c > cnt_l) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n % 2 != 0 && check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
