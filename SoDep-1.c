#include <stdio.h>
#include <math.h>

long long f[93];
int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int tcs(int n){
	int s = 0;
	while(n != 0){
		s += n%10;
		n /= 10;
	}
	return s;
}

int fibo(int n){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
	int check = 0;
	for(int i = 0; i <= 92; i++){
		if(f[i] == tcs(n)){
			++check;
			break;
		}
	}
	if(check == 1) return 1;
	return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(prime(i) && fibo(i)) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(prime(i) && fibo(i)) printf("%d ", i);
		}
	}
}


