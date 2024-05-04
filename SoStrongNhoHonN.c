#include <stdio.h>

//int giai_thua(int n){
//	int s = 1;
//	for(int i = 1; i <= n; i++){
//		s *= i;
//	}
//	return s;
//}

int giai_thua(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return n*giai_thua(n-1);
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
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(i == strong(i)) printf("%d ", i);
	}
	return 0;
}
