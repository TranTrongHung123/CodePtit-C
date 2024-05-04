#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = i;
		int res = i-1;
		if(i <= b){
		for(int j = 1; j <= b; j++){
			if(j <= b+1-i){
				printf("%c", 64+cnt++);
			}
			else{
				printf("%c", 64+res--);
			}
		}			
		}
		else{
			int x = b;
			for(int j = 1; j <= b; j++){
				printf("%c", 64+x--);
			}
		}
		printf("\n");
	}
}
