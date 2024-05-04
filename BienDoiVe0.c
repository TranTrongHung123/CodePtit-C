#include <stdio.h>

int a[100][100];

void swap(int n, int m){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			if(a[i][j] == 0) a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	char tmp[100];
	for(int i = 0; i < n; i++){
		gets(tmp);
		for(int j = 0; j < n; j++){
			a[i][j] = tmp[j] - '0';
		}
	}
	int cnt = 0;
	for (int i = n-1; i >= 0; i--) {
		for (int j = n-1; j >= 0; j--) {
			if (a[i][j] == 1) {
				swap(i, j);
				++cnt;
			}
		}
	}
	printf("%d", cnt);
}
