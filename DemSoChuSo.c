#include <stdio.h>

int scs(int n){
	int cnt = 0;
	while(n){
		++cnt;
		n /= 10;
	}
	return cnt;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", scs(n));
}
