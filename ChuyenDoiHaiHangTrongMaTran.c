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
	for(int i = 0; i < N; i++){
		int tmp = x[a-1][i];
		x[a-1][i] = x[b-1][i];
		x[b-1][i] = tmp;
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
