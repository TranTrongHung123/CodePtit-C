#include <stdio.h>
#include <math.h>

void sort(int a[], int n){
	int temp = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[j] < a[i]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;
}

int cnt[1000000] = {0};
int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		sort(a,n);
		for(int i = 0; i < n; i++){
			++cnt[a[i]];
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < n; i++){
			if(prime(a[i]) && cnt[a[i]] != 0){
				printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]] = 0;
			}
		}	
	}
}
