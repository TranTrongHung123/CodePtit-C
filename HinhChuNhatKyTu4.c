#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = a+1-i;
		if(a == b){
		for(int j = 1; j <= b; j++){
			if(j < i){
				printf("%c", 64+cnt++);
			}
			else{
				printf("%c", 64+cnt);
			}
		}			
		}
		else if(a < b){
		for(int j = 1; j <= b; j++){
			if(j < i + b-a){
				printf("%c", 64+cnt++);
			}
			else{
				printf("%c", 64+cnt);
			}
		}			
		}
		else{
			int res = a+1-i;
			for(int j = 1; j <= b; j++){
				if(i < b){
					printf("%c", 64+b);
				}
				else{
					if(j+a-b < i){
						printf("%c", 64+res++);
					}
					else{
						printf("%c", 64+res);
					}					
				}
			}
		}
		printf("\n");
	}
}
