#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(b == 0) printf("0");
	else{
		int tong = a+b, hieu = a-b, tich = a*b, du = a%b;
		float thuong = (float)a/b;
		printf("%d %d %d %.2f %d", tong, hieu, tich, thuong, du);
	}
}
