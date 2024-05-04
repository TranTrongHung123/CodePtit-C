#include <stdio.h>

int check1(int n){
	int s = 0, a = n;
	while(n){
		s = s*10 + n%10;
		n /= 10;
	}
	if(s == a) return 1;
	return 0;
}

int check2(int n){
	int b, cnt = 0;
	while(n){
		b = 0;
		b += n%10;
		if(b == 6){
			++cnt;
		}
		n /= 10;
	}
	if(cnt >= 1) return 1;
	return 0;
}

int check3(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if((sum-8)%10 == 0) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int cnt = 0;
	if(a < b){
	for(int i = a; i <= b; i++){
		if(check1(i) && check2(i) && check3(i)) printf("%d ", i);
	}
	}
	else{
		for(int i = b; i <= a; i++){
		if(check1(i) && check2(i) && check3(i)) printf("%d ", i);
	}
	}
}
