#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void kt(char a[]){
	a[0] = toupper(a[0]);
	for(int i = 1; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char b[100];
		gets(b);
		int n = 0;
		char a[100][100];
		char* token = strtok(b," ");
		while(token != NULL){
			strcpy(a[n],token);
			++n;
			token = strtok(NULL, " ");
		}
		for(int i = 0; i < n; i++){
			kt(a[i]);
			printf("%s", a[i]);
			if(i != n-1) printf(" ");
		}
		printf("\n");
	}
}
