#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
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
		qsort(a,n,sizeof(int),cmp);
		int min = 2e9 + 1;
		int cnt = 0;
		for(int i = 0; i < n-1; i++){
			int s = 0;
			s += (int)abs(a[i+1]-a[i]);
			if(s <= min){
				min = s;
			}
		}
		for(int i = 0; i < n-1; i++){
			int h = 0;
			h += (int)abs(a[i+1]-a[i]);
			if(min == h){
				++cnt;
			}
		}		
		printf("%d %d\n", min, cnt);
	}
}
