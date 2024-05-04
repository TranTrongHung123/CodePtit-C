#include <stdio.h>

int check1(int n){
	while(n){
		int t = 0;
		t += n%10;
		if(t == 9) return 0;
		n /= 10;
	}
	return 1;
}

int check2(int n){
	int a = 0, b = n;
	while(n){
		a = (a*10) + (n%10);
		n /= 10;
	}
	if(a == b) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(check1(i) && check2(i)){
			++cnt;
			printf("%d ", i);
		}
	}
	printf("\n%d", cnt);
}
