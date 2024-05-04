#include <stdio.h>

int min(int a, int b){
	return a > b ? b : a;
}

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(c < min(a,b)) printf("%d", c);
	else printf("%d", min(a,b));
}
