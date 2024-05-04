#include <stdio.h>

int gcd(int a, int b){
	while(b != 0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(int a, int b){
	long long s = (long long)a*b/gcd(a,b);
	return s;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%lld %d\n", lcm(a,b), gcd(a,b));
	}
}
