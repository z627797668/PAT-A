#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a += b;
	if (a < 0)
	{
		a = -a;
		printf("-");
	}
	int w1, w2, w3;
	w1 = a / 1000000;
	w2 = a / 1000 % 1000;
	w3 = a % 1000;
	if (w1 != 0)
	{
		printf("%d,%03d,%03d", w1, w2, w3);
	}
	else if (w1 == 0 && w2 != 0)
	{
		printf("%d,%03d",w2, w3);
	}
	else
	{
		printf("%d", w3);
	}
	system("pause");
	return 0;
}
