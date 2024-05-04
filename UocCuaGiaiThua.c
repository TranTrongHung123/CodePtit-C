#include <stdio.h>

int degree(int n, int p){
	int s = 0;
	for(int i = p; i <= n; i *= p){
		s += n/i;
	}
	return s;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d%d", &n, &p);
		printf("%d\n", degree(n,p));
	}
}
