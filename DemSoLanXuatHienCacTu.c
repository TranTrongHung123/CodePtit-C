#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void change(char a[]){
	for(int i = 0; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
}
int main(){
	char s[1000];
	gets(s);
	change(s);
	char a[1000][1000];
	int n = 0;
	char* token = strtok(s, " ");
	while(token != NULL){
		strcpy(a[n],token);
		++n;
		token = strtok(NULL, " ");
	}
	int x[1000] = {0};
	for(int i = 0; i < n; i++){
		if(x[i] == 0){
			int cnt = 1;
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i],a[j]) == 0){
					++cnt;
					x[j] = 1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}
