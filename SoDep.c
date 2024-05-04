#include <stdio.h>
#include <math.h>

long long check1(long long n)
{
	long long end = n%10, start;
	while(n != 0)
	{
		start = 0;
		start += n%10;
		n /= 10;
	}
	if(end == 2*start || start == 2*end) return 1;
	return 0;
}


long long tNghich(long long n)
{
	long long s = 0, m = n;
	while(n != 0)
	{
		s += s*10 + n%10;
		n /= 10;
	}
	if(s == m) return 1;
	return 0;
}

long long scs(long long n)
{
	int cnt = 0;
	while(n != 0)
	{
		++cnt;
		n /= 10;
	}
	return cnt;
}

long long check2(long long n)
{
	long long rev1 = n/10, rev2;
	rev2 = rev1/pow(10,scs(n)-1);
	if(tNghich(rev2)) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(check1(n) && check2(n)) printf("YES\n");
		else printf("NO\n");
	}
}

