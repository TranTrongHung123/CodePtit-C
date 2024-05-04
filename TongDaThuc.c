#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int dt[10001] = {0};

void sum(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(isdigit(a[i])){
			int heso = 0;
			while(isdigit(a[i])){
				heso = heso*10 + a[i]- '0';
				++i;
			}
			i += 3;
			int mu = 0;
			while(isdigit(a[i])){
				mu = mu*10 + a[i] - '0';
				++i;
			}
			dt[mu] += heso;			
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[10000], b[10000];
		gets(a);
		gets(b);
		sum(a);
		sum(b);
		int cnt = 0;
		for(int i = 10000; i >= 0; i--){
			if(dt[i] != 0){
				++cnt;
			}
		}
		for(int i = 10000; i >= 0; i--){
			if(dt[i] != 0){
				printf("%d*x^%d", dt[i], i);
				--cnt;
				if(cnt != 0){
					printf(" + ");
				}
			}
		}
		printf("\n");
		for(int i = 0; i <= 10000; i++){
			dt[i] = 0;
		}
	}
}


