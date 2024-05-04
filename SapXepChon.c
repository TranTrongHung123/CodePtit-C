#include <stdio.h>

void selectionSort(int a[], int n){
	int t = 1;
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			if(a[j] < a[min]) min = j;
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
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
	selectionSort(a,n);
}
