#include <stdio.h>
#include <math.h>
int hoan_hao(int n){
	if(n == 1) return 0;
	int cnt = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cnt += i + n/i;
		}
	}
	if(cnt == n) return 1;
	else return 0;
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
		if(hoan_hao(i)) printf("%d ", i);
	}
	}
	else{
		for(int i = b; i <= a; i++){
		if(hoan_hao(i)) printf("%d ", i);
	}
	}
	return 0;
}
