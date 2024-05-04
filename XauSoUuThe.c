#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char a[]){
	int x = strlen(a);
	int c = 0, l = 0;
	for(int i = 0; i < x; i++){
		if((a[i]-'0') % 2 == 0) ++c;
		else ++l;
	}
	if((x%2 == 0 && c > l) || (x%2 != 0 && c < l)) return 1;
	return 0;
}

int check1(char a[]){
	for(int i = 0; i < strlen(a); i++){
		if(!isdigit(a[i])) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1005];
		gets(s);
		if(check1(s) == 0) printf("INVALID");
		else if(check(s)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
