#include <stdio.h>

int tn(int n){
	int t = 0;
	while(n){
		t = t*10 + n%10;
		n /= 10;
	}
	return t;
}

int main()
{
	int n;
	scanf("%d", &n);
	int s = 0;
	while(n){
		s = 10*s + n%2;
		n = n/2;
	}
	printf("%d", tn(s));
}
