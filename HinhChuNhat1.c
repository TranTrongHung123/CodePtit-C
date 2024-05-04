#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
	if(i <= b){
		for(int j = i; j <= b; j++){
			printf("%d", j);
		}
		for(int k = i - 1; k >= 1; k--){
			printf("%d", k);
		}
	}
	else{
		printf("%d",i);
		for(int j = b-1; j >= 1; j--){
			printf("%d", j);
		}
	}
	printf("\n");
	}
}
