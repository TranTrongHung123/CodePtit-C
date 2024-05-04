#include <stdio.h>
#include <string.h>

int main(){
	char s[1000];
	gets(s);
	char a[1000][1000];
	int n = 0;
	char* token = strtok(s, " ");
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	int mark[1000] = {0};
	for(int i = 0; i < n; i++){
		if(mark[i] == 0){
			printf("%s ", a[i]);
			for(int j = i+1; j < n; j++){
				if(strcmp(a[i],a[j]) == 0) mark[j] = 1;
			}
		}
	}
}
