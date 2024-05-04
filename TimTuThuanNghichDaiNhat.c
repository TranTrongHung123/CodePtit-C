#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct tu{
	char nd[1001];
	int fre;
};

typedef struct tu word;

word a[1001];
int n = 0;

int check(char a[]){
	int l = 0;
	int r = strlen(a) - 1;
	while(l <= r){
		if(a[l] != a[r]) return 0;
		++l;
		--r;
	}
	return 1;
}

int find(word a[], int n, char s[]){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].nd,s) == 0) return i;
	}
	return -1;
}

int main(){
	char s[1001];
	while(scanf("%s", s) != -1){
		if(check(s)){
			int index = find(a,n,s);
			if(index != -1){
				++a[index].fre;
			}
			else{
				strcpy(a[n].nd,s);
				a[n].fre = 1;
				++n;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		if(strlen(a[i].nd) >= max) max = strlen(a[i].nd);
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i].nd) == max) printf("%s %d\n", a[i].nd, a[i].fre);
	}
}
