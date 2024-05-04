#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct word{
	char nd[1007];
	int ts;
};

typedef struct word word;

word a[1007];
int n = 0;

int check(char a[]){
	int l = 0;
	int r = strlen(a) - 1;
	while(l <= r){
		if(strcmp(a[l],a[r]) != 0) return 0;
		++l;
		--r;
	}
	return 1;
}

int find(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c,a[i].nd) == 0) return i;
	}
	return -1;
}

int main(){
	char tmp[1007];
	while(scanf("%s", tmp) != -1){
		int index = find(tmp);
		if(check(tmp)){
			if(index == -1){
				strcpy(a[n].nd,tmp);
				a[n].ts = 1;
				++n;
			}
			else{
				++a[index].ts;
			}
		}
	}
	int tsmax = 0;
	char res[1007];
	for(int i = 0; i < n; i++){
		if(a[i].ts > tsmax){
			tsmax = a[i].ts;
			strcpy(res,a[i].nd);
		}
	}
	printf("%s\n", res);
}
