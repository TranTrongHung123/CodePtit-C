#include <stdio.h>
#include <math.h>

int hoan_hao(int n){
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
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		if(hoan_hao(i)) printf("%d ", i);
	}
}

