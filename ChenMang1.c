#include <stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m], b[n];
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	int x;
	scanf("%d", &x);
	for(int i = 0; i < x; i++){
		printf("%d ", a[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", b[i]);
	}
	for(int i = x; i < m; i++){
		printf("%d ", a[i]);
	}
}
