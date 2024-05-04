#include <stdio.h>
#include <math.h>

int tong_uoc(int n){
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) sum += i + n/i;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	if(tong_uoc(n) == n) printf("1");
	else printf("0");
}
