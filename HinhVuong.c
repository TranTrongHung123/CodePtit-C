#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[2*n-1][2*n-1];
	int h1 = 0, c1 = 0, h2 = 2*n-2, c2 = 2*n-2, x = n;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = x;
		}
		++h1;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = x;
		}
		--c2;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = x;
		}
		--h2;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = x;
		}
		++c1;
		--x;
	}
	for(int i = 0; i < 2*n-1; i++){
		for(int j = 0; j < 2*n-1; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
