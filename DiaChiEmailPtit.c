#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void change(char a[]){
	for(int i = 0; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}
int main(){
	char s[1000];
	gets(s);
	char a[1000][1000];
	int n = 0;
	char* token = strtok(s," ");
	while(token != NULL){
		strcpy(a[n],token);
		++n;
		token = strtok(NULL," ");
	}
	for(int i = 0; i < n-1; i++){
		a[i][0] = tolower(a[i][0]);
		printf("%c", a[i][0]);
	}
	change(a[n-1]);
	printf("%s@ptit.edu.vn", a[n-1]);
}
