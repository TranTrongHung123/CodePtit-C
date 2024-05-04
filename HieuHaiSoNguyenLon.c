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

void subtraction(char a[], char b[]){
	int n1 = strlen(a);
	int n2 = strlen(b);
	reverse(a);
	reverse(b);
	char x[1005], y[1005], h[1005];
	for(int i = 0; i < n1; i++){
		x[i] = a[i] - '0';
	}
	for(int i = 0; i < n2; i++){
		y[i] = b[i] - '0';
	}
	for(int i = n2; i < n1; i++){
		y[i] = 0;
	}
	int n = 0;
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			nho = 1;
			h[n++] = tmp + 10;
		}
		else{
			h[n++] = tmp;
			nho = 0;
		}
	}
	int ok = 0;
	for(int i = n-1; i >= 0; i--){
		if(ok == 0 && h[i]){
			ok = 1;
		}
		if(ok) printf("%d", h[i]);
	}
	if(ok == 0) printf("0");
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1005], b[1005];
		gets(a);
		gets(b);
		if(strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a,b) > 0)) subtraction(a,b);
		else subtraction(b,a);
		printf("\n");
	}
}
