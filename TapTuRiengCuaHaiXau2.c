#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void sort(char a[][1000], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(a[i],a[j]) > 0){
				char s[1000];
				strcpy(s,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],s);				
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[1000], s2[1000];
		gets(s1);
		gets(s2);
		char a[1000][1000], b[1000][1000];
		int n = 0, m = 0;
		char* token = strtok(s1, " ");
		while(token != NULL){
			strcpy(a[n],token);
			++n;
			token = strtok(NULL, " ");
		}
		char* token1 = strtok(s2, " ");
		while(token1 != NULL){
			strcpy(b[m],token1);
			++m;
			token1 = strtok(NULL, " ");
		}
		sort(a,n);
		int mark[1000] = {0};
		for(int i = 0; i < n; i++){
			mark[i] = 0;
		}		
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i],a[j]) == 0){
					mark[j] = 1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			int ok = 0;
			if(mark[i] == 0){
				for(int j = 0; j < m; j++){
					if(strcmp(a[i],b[j]) != 0){
						++ok;
					}
				}
			}
			if(ok == m) printf("%s ", a[i]);
		}
		printf("\n");
	}
}
