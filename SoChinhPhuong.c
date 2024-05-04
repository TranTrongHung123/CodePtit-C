#include <stdio.h>
#include <math.h>

int chinh_phuong(int n){
	int s = sqrt(n);
	if(s*s == n) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(chinh_phuong(n)) printf("YES\n");
		else printf("NO\n");
	}
}
