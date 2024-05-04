#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define ll long long

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int mark[1000] = {0};
	for(int i = 0 ; i< n; i++){
		++mark[a[i]];
	}
	int b[1000], cnt = 0;
	for(int i = 0; i < n; i++){
		if(mark[a[i]] != 0 && mark[a[i]] > 1){
			b[cnt++] = a[i];
			mark[a[i]] = 0;
		}
	}
	if(cnt == 0) printf("0");
	else{
		for(int i = 0; i < cnt; i++){
			printf("%d ", b[i]);
		}
	}
}
