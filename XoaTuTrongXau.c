#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ss(char a[], char b[]){
	int x1 = strlen(a);
	int x2 = strlen(b);
	if(x1 != x2) return 0;
	for(int i = 0; i < strlen(a); i++){
		if(tolower(a[i]) != tolower(b[i])) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int i = 1; i <= t; i++){
		char s1[1000], s2[1000];
		gets(s1);
		gets(s2);
		char* token = strtok(s1, " ");
		char a[1000][1000];
		int n = 0;
		printf("Test %d: ", i);
		while(token != NULL){
			if(ss(token,s2) == 0){
				strcpy(a[n],token);
				++n;
			}
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			printf("%s", a[i]);
			if(i != n-1) printf(" ");
		}
		printf("\n");		
	}
}
