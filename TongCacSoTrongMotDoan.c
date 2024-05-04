#include <stdio.h>

int main(){
	int u, d, n;
	scanf("%d%d%d", &u, &d, &n);
	printf("%d", n/2*(2*u+(n-1)*d));
}
