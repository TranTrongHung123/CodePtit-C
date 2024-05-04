#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check1(int a[], int n){
	for(int i = 0; i < n-1; i++){
		if(a[i] >= a[i+1]) return 0;
	}
	return 1;
}

int check2(int a[], int n){
	for(int i = 0; i < n-1; i++){
		if(a[i] != a[i+1]) return 0;
	}
	return 1;
}

int check3(int a[], int n){
	if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return 1;
	return 0;
}

int check4(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] != 8 && a[i] != 6) return 0;
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
		int a[1000];
		int n = 0;
		for(int i = 6; i <= 8; i++){
			a[n] = s[i] - '0';
			++n;
		}
		for(int i = 10; i < strlen(s); i++){
			a[n] = s[i] - '0';
			++n;
		}
		if(check1(a,n) || check2(a,n) || check3(a,n) || check4(a,n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
