#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int cnt = i;
		int x = n-1;
		for(int j = 1; j <= i; j++){
			printf("%d ", cnt);
			cnt += x;
			--x;
		}
		printf("\n");
	}
}
