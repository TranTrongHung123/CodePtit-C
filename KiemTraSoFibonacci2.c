#include <stdio.h>

long long a[100];
void fibo(){
	a[0] = 0;
	a[1] = 1;
	for(int i = 2; i <= 92; i++){
		a[i] = a[i-2] + a[i-1];
	}
}

int main(){
	fibo();
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int check = 0;
		for(int i = 0; i <= 92; i++){
			if(a[i] == n){
				++check;
				break;
			}
		}
		if(check == 1) printf("YES\n");
		else printf("NO\n");
	}
}
