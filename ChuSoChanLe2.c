#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt_c = 0, cnt_l = 0;
		while(n != 0){
		int s = 0;
		s += n%10;
		if(s % 2 == 0) ++cnt_c;
		else ++cnt_l;
		n /= 10;
	}
	printf("%d %d\n", cnt_l, cnt_c);
	}	
}
