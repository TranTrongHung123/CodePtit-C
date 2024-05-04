#include<stdio.h>
#include<string.h>

int check(char a, char b){
	return (a == '(' && b == ')') || 
	(a == '{' && b == '}') ||
	(a == '[' && b == ']') || 
	(a == '\'' && b == '\'') || 
	(a == '"' && b == '"');
}

int check1(char s[]){
	int n = strlen(s);
	char a[n];
	int tmp = -1;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '\'' || s[i] == '"') a[++tmp] = s[i];
		else
		{
			if (tmp == -1 || !check(a[tmp], s[i])) return 0;
			tmp--;
		}
	}
	return tmp==-1;
}

int main() {
	char s[100];
	scanf("%s", s);
	if (check1(s)) printf("1");
	else printf("0");
}
