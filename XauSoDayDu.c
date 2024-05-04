#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check1(char a[]){
	if((a[0]-'0') == 0) return 0;
	for(int i = 0; i < strlen(a); i++){
		if(!isdigit(a[i])) return 0;
	}
	return 1;
}

int check2(char a[]){
	int mark[1005] = {0};
	for(int i = 0; i < strlen(a); i++){
		mark[a[i]] = 1;
	}
	for(int i = 48; i <= 57; i++){
		if(mark[i] == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1005];
		gets(s);
		if(check1(s) == 0) printf("INVALID");
		else if(check2(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
