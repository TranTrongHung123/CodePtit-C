#include <stdio.h>

int check(int a[], int i){
	for(int j = i; j >= 0; j--){
		if(a[j] > a[i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(check(a,i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
}
