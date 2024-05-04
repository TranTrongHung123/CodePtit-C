#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				scanf("%d", &a[j][k]);
			}
		}
		printf("Test %d:", i);
		for(int j = 0; j < n; j++){
			if(j != 0){
				for(int k = 0; k < m; k++){
					if(k != 0){
						printf("%d ", a[j][k]);
					}
				}	
			}
			printf("\n");
		}		
	}
}
