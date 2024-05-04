#include <stdio.h>

int giai_thua(int n){
	int s = 1;
	for(int i = 1; i <= n; i++){
		s *= i;
	}
	return s;
}

int strong(int n){
	int sum = 0;
	while(n != 0){
		int t = 0;
		t = n%10;
		sum += giai_thua(t);
		n /= 10;
	}
	return sum;
}

int main(){
	int a ,b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(i == strong(i)) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(i == strong(i)) printf("%d ", i);
		}
	}
	return 0;
}
