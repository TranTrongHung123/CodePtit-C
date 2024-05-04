#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char s[100], tmp[100];
	int n = 0;
	gets(s);
	for(int i = 0; i < strlen(s); i++){
		if(i == 0){
			if(s[i] != s[i+1]){
				tmp[n++] = s[i];
			}
		}
		else if(i == strlen(s)-1){
			if(s[i-1] != s[i]){
				tmp[n++] = s[i];
			}
		}
		else{
			if(s[i] != s[i-1] && s[i] != s[i+1]){
				tmp[n++] = s[i];
			}
		}
	}
	int cnt = 0;
	int mark1[100] = {0};
	int mark2[100] = {0};
	for(int i = 0; i < strlen(tmp); i++){
		mark1[tmp[i]] = 1;
		for(int j = i+1; j < strlen(tmp); j++){
			if(tmp[i] == tmp[j]){
				mark1[tmp[j]] = 1;
				for(int k = i+1; k < j; k++){
					++mark2[tmp[k]];
				}
				for(int k = i+1; k < j; k++){
					if(mark1[tmp[k]] == 0 && mark2[tmp[k]] == 1){
						++cnt;
					}
				}
				for(int k = i+1; k < j; k++){
					mark2[tmp[k]] = 0;
				}
			}
		}
	}
	printf("%d", cnt);
}
