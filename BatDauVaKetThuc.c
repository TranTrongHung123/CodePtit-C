#include <stdio.h>

int check(int n){
	int start, end = n%10;
	while(n != 0){
		start = 0;
		start += n%10;
		n /= 10;
	}
	if(end == start) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
