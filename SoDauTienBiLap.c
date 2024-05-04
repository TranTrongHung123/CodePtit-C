#include <stdio.h>

int check(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] == a[j]) return a[i];
		}
	}
	return 0;
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
		if(check(a,n) != 0) printf("%d\n", check(a,n));
		else printf("NO\n");
	}
}
