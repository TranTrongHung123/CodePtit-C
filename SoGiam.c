#include <stdio.h>

int check(int n){
	while(n >= 10){
		int a = n%10;
		if(((n/10)%10) <= a) 
			return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for(int i = a; i <= b; i++){
			if(check(i)){
				++cnt;
			}
		}
		printf("%d\n", cnt);
	}
}

