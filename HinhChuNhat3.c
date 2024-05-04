#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = i;
		for(int j = 1; j <= b; j++){
			if(j < i){
				printf("%d", cnt--);
			}
			else printf("%d", cnt++);
		}
		printf("\n");
	}
}

