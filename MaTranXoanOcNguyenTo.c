#include <stdio.h>
#include <math.h>

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}
int prime[400];

void nt(){
	int i = 2, cnt = 0;
	while(cnt <= 400){
		if(check(i)){
			prime[cnt] = i;
			++cnt;
		}
		++i;
	}
}

int main(){
	nt();
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[n][n];
		int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1, cnt = 0;
		while(c1 <= c2 && h1 <= h2){
			for(int i = c1; i <= c2; i++){
				a[h1][i] = prime[cnt];
				++cnt;
			}
			++h1;
			for(int i = h1; i <= h2; i++){
				a[i][c2] = prime[cnt];
				++cnt;
			}
			--c2;
			for(int i = c2; i >= c1; i--){
				a[h2][i] = prime[cnt];
				++cnt;
			}
			--h2;
			for(int i = h2; i >= h1; i--){
				a[i][c1] = prime[cnt];
				++cnt;
			}
			++c1;
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
