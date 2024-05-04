#include <stdio.h>

int check1(long long n){
	long long s = n, a = 0;
	while(n != 0){
		a = a*10 + n%10;
		n /= 10;
	}
	if(s == a) return 1;
	return 0;
}

int check2(long long n){
	while(n != 0){
		int c = 0;
		c += n%10;
		if(c%2 == 0) return 0;
		n /= 10;
	}
	return 1;
}

int check3(long long n){
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	if(sum % 2 != 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check1(n) && check2(n) && check3(n)) printf("YES\n");
		else printf("NO\n");
	}
}
