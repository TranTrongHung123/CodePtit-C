#include<stdio.h>
#include<string.h>

int m[15];
int check(char a[])
{
	int n = strlen(a), d[125], tmp, c[15], nho = 0;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++) c[j] = 0;
		for (int j = n-1; j >= 0; j--)
		{
			tmp = (a[j] - '0')*i+nho;
			d[j] = tmp%10;
			c[d[j]]++;
			nho = tmp/10;
		}
		if (nho > 0) c[nho]++;
		for (int j = 0; j < 10; j++)
		{
			if (m[j] != c[j]) return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char a[65];
		scanf("%s", a);
		int n = strlen(a);
		for (int i = 0; i < 10; i++) m[i] = 0;
		for (int i = 0; i < n; i++) m[a[i] - '0']++;
		if (check(a)) printf("YES\n");
		else printf("NO\n");
	}
}
