#include <stdio.h>

int max(int a, int b){
	return a > b ? a : b;
}

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
		int res = 0, cnt = 1;
		int b[n], pos = 0;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i-1]) ++cnt;
			else cnt = 1;
			if(cnt > res){
				res = cnt;
				b[0] = i-res+1;
				pos = 1;
			}
			else if(res == cnt){
				b[pos] = i-res+1;
				++pos;
			}
		}
		printf("Test %d:\n", i);
		printf("%d\n", res);
		for(int i = 0; i < pos; i++){
			for(int j = 0; j < res; j++){
				printf("%d ", a[b[i]+j]);
			}
			printf("\n");
		}
	}
}
