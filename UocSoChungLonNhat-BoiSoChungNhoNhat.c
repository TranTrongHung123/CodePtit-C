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
	return (long long)a*b/gcd(a,b);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n%lld", gcd(a,b), lcm(a,b));
}
