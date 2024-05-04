#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int tong = a+b, hieu = a-b, nguyen = a/b, du = a%b;
	long long tich = (long long)a*b;
	float thuc = (float)a/b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2lf", tong, hieu, tich, nguyen, du, thuc);
}
