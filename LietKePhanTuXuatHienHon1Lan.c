#include <stdio.h>

int mark[10000000];
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		++mark[a[i]];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(mark[a[i]] > 1 && mark[a[i]] != 0){
			++cnt;
			mark[a[i]] = 0;
		}
	}
	printf("%d\n", cnt);
	for(int i = 0 ; i < n; i++){
		mark[a[i]] = 0;
	}
	for(int i = 0; i < n; i++){
		++mark[a[i]];
	}
	for(int i = 0; i < n; i++){
		if(mark[a[i]] > 1 && mark[a[i]] != 0){
			printf("%d ", a[i]);
			mark[a[i]] = 0;
		}
	}
}
