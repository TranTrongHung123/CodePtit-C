#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return n>1;
}

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
	for(int i = 0; i < strlen(a); i++){
		if(prime(a[i]-'0') == 0) return 0;
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
		if(check1(s) && check2(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}


