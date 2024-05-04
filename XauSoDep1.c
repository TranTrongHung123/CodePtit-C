#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check2(char a[]){
	char b[1000];
	strcpy(b,a);
	int l = 0, r = strlen(a)-1;
	while(l < r){
		char tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;
		--r;
	}
	if(strcmp(a,b) == 0) return 1;
	return 0;
}

int check(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if((a[i]-'0') % 2 != 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1000];
		gets(s);
		if(check2(s)&& check(s) == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
