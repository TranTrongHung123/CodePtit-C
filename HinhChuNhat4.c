#include <stdio.h>
int max(int a, int b){
	return a > b ? a : b;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= a; i++){
		int cnt = max(a,b)+1-i;
		if(a > b){
		if(i > a-b){
		for(int j = 1; j <= b; j++){
			if(j < a-i+1) printf("%d", cnt--);
			else printf("%d", cnt++);
		}
		}
		else{
			for(int j = 1; j <= b; j++){
				printf("%d", cnt--);
			}
		}			
		}
		else{
		for(int j = 1; j <= b; j++){
			if(j < b-i+1) printf("%d", cnt--);
			else printf("%d", cnt++);
		}			
		}
		printf("\n");
	}
}
