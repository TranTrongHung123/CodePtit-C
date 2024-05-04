#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int m, n;
		scanf("%d%d", &m, &n);
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int row, col, max1 = -1;
		for(int i = 0; i < m; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				sum += a[i][j];
			}
			if(sum > max1){
				max1 = sum;
				row = i;
			}
		}
		int max2 = -1;
		for(int j = 0; j < n; j++){
			int s = 0;
			for(int i = 0; i < m; i++){
				if(i != row){
					s += a[i][j];
				}
			}
			if(s > max2){
				max2 = s;
				col = j;
			}
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < m; i++){
			if(i != row){
				for(int j = 0; j < n; j++){
					if(j != col){
						printf("%d ", a[i][j]);
					}
				}
			}
			printf("\n");
		}
	}
}
