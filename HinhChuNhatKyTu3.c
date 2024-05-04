#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = i;
		if(i <= b){
		for(int j = 1; j <= b; j++){
			if(j <= b-i){
				printf("%c", 63+cnt++);
			}
			else{
				printf("%c", 63+cnt);
			}
		}			
		}
		else{
			for(int i = 1; i <= b; i++){
				printf("%c", 63+b);
			}
		}
		printf("\n");
	}
}


