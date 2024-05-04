#include <stdio.h>

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_tang(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[j] < a[i]){
				swap(&a[i],&a[j]);
			}
		}
	}
}

void sort_giam(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(a[j] > a[i]){
				swap(&a[i],&a[j]);
			}
		}
	}
}


int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		sort_tang(a,n);
		sort_giam(b,n);
		int x = 2*n;
		int c[x];
		int tmp1 = 0;
		for(int i = 0; i < x; i += 2){
			c[i] = a[tmp1];
			++tmp1;
		}
		int tmp2 = 0;
		for(int i = 1; i < x; i += 2){
			c[i] = b[tmp2];
			++tmp2;
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < x; i++){
			printf("%d ", c[i]);
		}
		printf("\n");
	}
}
