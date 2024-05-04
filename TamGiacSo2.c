#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int a = 1, b = 2;
		for(int j = 1; j <= i; j++){
			if(i % 2 != 0){
				printf("%d", a);
				a += 2;
			}
			else{
				printf("%d", b);
				b += 2;
			}
		}
		printf("\n");
	}
}
