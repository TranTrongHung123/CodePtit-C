#include <stdio.h>
#include <math.h>

int check(int n){
	while(n >= 10){
		int e = n%10;
		if(e < (n/10)%10) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int y, x = 1;
		while(n--){
			x = x*10;
		}
		y = x/10;
		for(int i = y; i < x; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
