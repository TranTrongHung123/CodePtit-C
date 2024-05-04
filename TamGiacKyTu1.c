#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int cnt = i + (i*(i-1)/2);
		for(int j = 1; j <= i; j++){
			if(i % 2 == 0){
				printf("%c ", 96+cnt);
				--cnt;
			}
			else{
				printf("%c ", 96+cnt-i+1);
				++cnt;
			}
		}
		printf("\n");
	}
}
