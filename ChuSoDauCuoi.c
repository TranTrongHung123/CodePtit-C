#include <stdio.h>

void kqua(int n){
	int end = n%10, start;
	while(n != 0){
		start = 0;
		start += n%10;
		n /= 10;
	}
	printf("%d %d", start, end);
}

int main(){
	int n;
	scanf("%d", &n);
	kqua(n);
}
