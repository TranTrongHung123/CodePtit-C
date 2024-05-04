#include <stdio.h>
#include <string.h>

int result(char a[]){
	int pos[strlen(a)];
	for(int i = 0; i < strlen(a); i++){
		pos[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j] && pos[i] < pos[j]+1){
				pos[i] = pos[j]+1;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < strlen(a); i++){
		if(pos[i] > max) max = pos[i];
	}
	return 26-max;
}

int main(){
	char s[1000];
	gets(s);
	printf("%d", result(s));
}
