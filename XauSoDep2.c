#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check1(char a[]){
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

int check2(char a[]){
	int x1 = 0;
	int x2 = strlen(a)-1;
	if((a[x1]-'0') == 8 && (a[x2]-'0') == 8) return 1;
	return 0;
}

int check3(char a[]){
	int sum = 0;
	for(int i = 0; i < strlen(a); i++){
		sum += a[i]-'0';
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1000];
		gets(s);
		if(check1(s) && check2(s) && check3(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
