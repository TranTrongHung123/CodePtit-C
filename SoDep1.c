#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int* doi(char a[]){
	int s = 0;
	for(int i = 0; i < strlen(a); i++){
		s = s*10 + a[i] - '0';
	}
	return s;
}
int check1(char a[]){
	for(int i = 0; i < strlen(a); i++){
		int t = 0;
		t = doi(a[i]);
		if(t % 2 != 0) return 0;
	}
	return 1;
}

int check2(char a[]){
	int l = 0, r = strlen(a)-1;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		++l;
		--r;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[505];
		gets(a);
		if(check1(a) && check2(a)) printf("YES\n");
		else printf("NO");
	}
}
