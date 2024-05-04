#include<stdio.h>
#include<string.h>

void xoay(char a[]){
	char b[55];
	strcpy(b, a); 
	for (int i = 1; i < strlen(a); i++)
	{
		a[i-1] = b[i]; 
	}
	a[strlen(a)-1] = b[0]; 
}

int main(){
	int n;
	scanf("%d", &n);
	char a[55][55];
	for (int i = 0; i < n; i++) scanf("%s", a[i]);
	char s[55];
	strcpy(s, a[0]); 
	char b[55];
	int m = strlen(s);
	int tmp = 1;
	int min = 100000007;
	for (int i = 0; i < m; i++){						
		int cnt = 0;
		for (int j = 0; j < n; j++){
			int k;
			strcpy(b, a[j]);
			for (k = 0; k < m; k++){
				if (strcmp(s, b) == 0){
					cnt += k;
					break;
				}
				xoay(b); 
			}
			if (k==m){
				tmp = 0; 
				break;
			}
		}
		if (cnt < min) min = cnt; 
		xoay(s);
	}
	if (tmp == 0) printf("-1");
	else printf("%d", min);
}
