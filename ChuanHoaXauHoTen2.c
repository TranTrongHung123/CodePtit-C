#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void change1(char a[]){
	a[0] = toupper(a[0]);
	for(int i = 1; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}

void change2(char a[]){
	for(int i = 0; i < strlen(a); i++){
		a[i] = toupper(a[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1000];
		gets(s);
		int n = 0;
		char a[1000][1000];
		char* token = strtok(s," ");
		while(token != NULL){
			strcpy(a[n],token);
			++n;
			token = strtok(NULL," ");
		}
		for(int i = 1; i < n; i++){
			change1(a[i]);
			printf("%s", a[i]);
			if(i == n-1) printf(", ");
			else if(i != n-1) printf(" ");
		}
		change2(a[0]);
		printf("%s", a[0]);
		printf("\n");
	}
}
