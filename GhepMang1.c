#include <stdio.h>

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_t(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n;j++){
			if(a[i] > a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}

void sort_g(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n;j++){
			if(a[i] < a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		char x;
		scanf("%d%d %c", &n, &m, &x);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int b[m];
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		if(x == 'F'){
			for(int i = 0; i < n; i++){
				printf("%d ", a[i]);
			}
			for(int i = 0; i < m; i++){
				printf("%d ", b[i]);
			}
			printf("\n");			
		}
		else if(x == 'A'){
			for(int i = 0; i < m; i++){
				printf("%d ", b[i]);
			}
			for(int i = 0; i < n; i++){
				printf("%d ", a[i]);
			}
			printf("\n");			
		}
		else if(x == 'T'){
			int f[n+m];
			for(int i = 0; i < n; i++){
				f[i] = a[i];
			}
			for(int i = 0; i < m; i++){
				f[i+n] = b[i];
			}
			sort_t(f,n+m);
			for(int i = 0; i < n+m; i++){
				printf("%d ", f[i]);
			}
			printf("\n");
		}
		else{
			int g[n+m];
			for(int i = 0; i < n; i++){
				g[i] = a[i];
			}
			for(int i = 0; i < m; i++){
				g[i+n] = b[i];
			}
			sort_g(g,n+m);
			for(int i = 0; i < n+m; i++){
				printf("%d ", g[i]);
			}
			printf("\n");
		}
	}
}







