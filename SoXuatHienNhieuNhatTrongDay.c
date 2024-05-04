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
		int mark[100000] = {0};
		for(int i = 0; i < n; i++){
			++mark[a[i]];
		}
		int max = -1e9;
		for(int i = 0; i < n; i++){
			if(mark[a[i]] > max) max = mark[a[i]];
		}
		for(int i = 0; i < n; i++){
			if(mark[a[i]] == max && mark[a[i]] != 0){
				printf("%d ", a[i]);
				mark[a[i]] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			mark[a[i]] = 0;
		}
		printf("\n");
	}
	return 0;
}
