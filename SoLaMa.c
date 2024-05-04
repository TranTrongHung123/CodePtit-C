#include <stdio.h>
#include <string.h>

int val[7] = {1, 5, 10, 50, 100, 500, 1000};
char s[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

int find(char a){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == a) return i;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1000];
		gets(s);
		int res = val[find(s[strlen(s)-1])];
		for(int i = strlen(s)-1; i >= 1; i--){
			int p1 = i;
			int p2 = i-1;
			if(val[find(s[p1])] <= val[find(s[p2])]) res += val[find(s[p2])];
			else res -= val[find(s[p2])];
		}
		printf("%d\n", res);
	}
	
}
