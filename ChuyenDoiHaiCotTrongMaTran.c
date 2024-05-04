#include <stdio.h>

int main(){
	int M, N;
	scanf("%d%d", &M, &N);
	int x[M][N];
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			scanf("%d", &x[i][j]);
		}
	}
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 0; i < M; i++){
		int tmp = x[i][a-1];
		x[i][a-1] = x[i][b-1];
		x[i][b-1] = tmp;
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
