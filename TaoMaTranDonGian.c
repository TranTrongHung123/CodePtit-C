#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		int x = 1;
		for(int j = 0; j < n; j++){
			if(i >= j){
				a[i][j] = 0;
				printf("%d ", a[i][j]);
			}
			else{
				a[i][j] = x;
				printf("%d ", a[i][j]);
				++x;
			}
		}
		printf("\n");
	}
}
