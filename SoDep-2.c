#include <stdio.h>

int check1(int n){
	int s = 0, b = n;
	while(n){
		s = s*10 + n%10;
		n /= 10;
	}
	if(s == b) return 1;
	return 0;
}

int check2(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x = 1, y, cnt = 0;
		while(n--){
			x = x*10;
		}
		y = x/10;
		for(int i = y; i < x; i++){
			if(check1(i) && check2(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
}
