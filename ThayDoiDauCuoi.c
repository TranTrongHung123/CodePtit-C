#include <stdio.h>
#include <math.h>

int tach(int n){
	int s;
	while(n){
		s = 0;
		s += n%10;
		n /= 10;
	}
	return s;
}

int tcs(int n){
	int sum = 0;
	while(n){
		++sum;
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	if(n%10 == 0){
		int t = n%(int)pow(10,tcs(n)-1);
		printf("%d", t+tach(n));
	}
	else{
		int a = n - (n%10) + tach(n);
		int b = (a%(int)pow(10,tcs(n)-1)) + (int)pow(10,tcs(n)-1)*(n%10);
		printf("%d", b);
	}
}
