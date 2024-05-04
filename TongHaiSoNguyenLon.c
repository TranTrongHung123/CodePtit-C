#include <stdio.h>
#include <string.h>

void reverse(char a[]){
	int l = 0;
	int r = strlen(a)-1;
	while(l < r){
		char tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;
		--r;
	}
}

void add(char a[], char b[]){
	int x = strlen(a);
	int y = strlen(b);
	int z[1000], g[1000], t[10000];
	reverse(a);
	reverse(b);
	for(int i = 0; i < x; i++){
		z[i] = a[i] - '0';
	}
	for(int i = 0; i < y; i++){
		g[i] = b[i] - '0';
	}
	for(int i = y; i < x; i++){
		g[i] = 0;
	}
	int n = 0;
	int nho = 0;
	for(int i = 0; i < x; i++){
		t[n++] = (z[i] + g[i] + nho)%10;
		nho = (z[i] + g[i] + nho)/10;
	}
	if(nho) t[n++] = nho;
	for(int i = n-1; i >= 0; i--){
		printf("%d", t[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1000], b[1000];
		gets(a);
		gets(b);
		if(strlen(a) > strlen(b)) add(a,b);
		else add(b,a);
		printf("\n");
	}
}
