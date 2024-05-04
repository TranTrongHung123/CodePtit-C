#include <stdio.h>

long long f[93];
void check(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	check();
	int n;
	scanf("%d", &n);
	int kt = 0;
	for(int i = 0; i <= 92; i++){
		if(f[i] == n){
			++kt;
			break;
		}
	}
	if(kt == 1) printf("1");
	else printf("0");
	
}
