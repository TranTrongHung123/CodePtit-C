#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b) printf("%d", (b-a+1)*(a+b)/2);
	else printf("%d", (a-b+1)*(a+b)/2);
}
