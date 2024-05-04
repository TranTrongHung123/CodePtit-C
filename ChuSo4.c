#include <stdio.h>

int check1(int n){
	int a;
	while(n){
		a = 0;
		a += n%10;
		if(a == 4) return 0;
		n /= 10;
	}
	return 1;
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

int check3(int n){
	int s = 0, c = n;
	while(n){
		s = s*10 + n%10;
		n /= 10;
	}
	if(s == c) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a = 1, b;
		while(n--){
			a *= 10;
		}
		b = a/10;
		for(int i = b; i < a; i++){
			if(check1(i) && check2(i) && check3(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
