#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	for(int i = n-x; i < n; i++){
		printf("%d ", a[i]);
	}
	for(int i = 0; i < n-x; i++){
		printf("%d ", a[i]);
	}
}
