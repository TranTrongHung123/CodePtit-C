#include <stdio.h>

long long gcd(long long a, long long b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b){
	return a*b/gcd(a,b);
}

long long kq(long long n){
	long long s, t;
	for(int i = 3; i <= n; i++){
		s = lcm(1,2);
		t = lcm(s,i);
		s = t;
	}
	return t;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld", kq(n));
		printf("\n");
	}
}
