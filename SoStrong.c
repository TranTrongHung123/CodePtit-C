#include <stdio.h>

int giai_thua(int n){
	int s = 1;
	for(int i = 2; i <= n; i++){
		s *= i;
	}
	return s;
}

int strong(int n){
	int sum = 0;
	while(n != 0){
		int t = 0;
		t += n%10;
		sum += giai_thua(t);
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	if(strong(n) == n) printf("1");
	else printf("0");
}
