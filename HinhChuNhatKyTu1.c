#include <stdio.h>

int max(int a, int b){
	return a>b?a:b;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = max(a,b);
		for(int j = 1; j <= b; j++){
			if(j < i){
				printf("%c", 96+cnt--);
			}
			else printf("%c", 96+cnt);
		}
		printf("\n");
	}
}

