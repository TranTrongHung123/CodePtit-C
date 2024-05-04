#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct tu{
	char nd[1001];
	int fre;
};

typedef struct tu word;

word a[1001];
int n = 0;

int find(word a[], int n, char s[]){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].nd,s) == 0) return i;
	}
	return -1;
}

int main(){
	char s[1001];
	while(scanf("%s", s) != -1){
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
	int max = 0;
	for(int i = 0; i < n; i++){
		if(strlen(a[i].nd) > max) max = strlen(a[i].nd);
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i].nd) == max){
			printf("%s %d %d\n", a[i].nd, max, a[i].fre);
		}
	}
}
