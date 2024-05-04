#include <stdio.h>
#include <string.h>

int main(){
	char s[100001];
	gets(s);
	int l = 0;
	int r = strlen(s)-1;
	while(l <= r){
		char max = s[l];
		for(int i = l; i <= r; i++){
			if(s[i] > max) max = s[i];
		}
		int x = 0;
		for(int i = l; i <= r; i++){
			if(s[i] == max){
				printf("%c", s[i]);
				x = i;
			}
		}
		l = x+1;
	}
}
