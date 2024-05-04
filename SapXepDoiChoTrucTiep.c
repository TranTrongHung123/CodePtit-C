#include <stdio.h>

void swap(int* n, int* m){
	int tmp = *n;
	*n = *m;
	*m = tmp;
}

void sort(int a[], int n){
	int t = 1;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[j] < a[i]){
				swap(&a[i],&a[j]);
			}
		}
		printf("Buoc %d: ", t);
		++t;
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a,n);
}
