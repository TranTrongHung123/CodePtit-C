#include <stdio.h>
#include <string.h>

int check(char a[]){
	int x = strlen(a);
	int  cnt = 0;
	int l = 0, r = x-1;
	while(l < r){
		if(a[l] != a[r]) ++cnt;
		++l;
		--r;
	}
	if((x % 2 == 0 && cnt == 1) || (x % 2 != 0 && cnt <= 1)) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[100];
		gets(a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
	}
}
