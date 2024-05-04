#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[200];
		gets(a);
		char* token = strtok(a," ");
		int cnt = 0;
		while(token != NULL){
			++cnt;
			token = strtok(NULL," ");
		}
		printf("%d\n", cnt);
	}
}
