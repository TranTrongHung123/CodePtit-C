#include <stdio.h>

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1, cnt = 1;
	int d = 0;
	while(h1 <= h2 && c1 <= c2){
		for(int i = c1; i <= c2; i++){
			a[h1][i] = cnt;
			++cnt;
			++d;
		}
		++h1;
        	if (d == n * m)
            break;
		for(int i = h1; i <= h2; i++){
			a[i][c2] = cnt;
			++cnt;
			++d;
		}
		--c2;
        	if (d == n * m)
            break;
		for(int i = c2; i >= c1; i--){
			a[h2][i] = cnt;
			++cnt;
			++d;
		}
		--h2;
        	if (d == n * m)
            break;
		for(int i = h2; i >= h1; i--){
			a[i][c1] = cnt;
			++cnt;
			++d;
		}
		++c1;
        	if (d == n * m)
            break;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
