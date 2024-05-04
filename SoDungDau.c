#include <stdio.h>

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
		for(int i = 0; i < n-1; i++){
			int s = n-1-i;
			int tmp = 0;
			for(int j = i+1; j < n; j++){
				if(a[i] > a[j]){
					++tmp;
				}
				if(tmp == s) printf("%d ", a[i]);
			}
		}
		printf("%d\n", a[n-1]);
	}
}
