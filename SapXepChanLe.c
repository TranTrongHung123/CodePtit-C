#include <stdio.h>

void sort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
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
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			printf("%d ", a[i]);
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			printf("%d ", a[i]);
		}
	}
}
