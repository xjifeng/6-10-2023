#include <stdio.h>
猜名次
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for ( a = 1; a <= 5; a++)
	{
		for ( b = 1; b <= 5; b++)
		{
			for ( c = 1; c <= 5; c++)
			{
				for ( d = 1; d <= 5; d++)
				{
					for ( e = 1; e <= 5; e++)
					{
						if (a*b*c*d*e==120)
						{
							if (
								(b == 2) + (a == 3) == 1 &&
								(b == 2) + (e == 4) == 1 &&
								(c == 1) + (d == 2) == 1 &&
								(c == 5) + (d == 3) == 1 &&
								(e == 4) + (a == 1) == 1 
								)
							{
								printf("a:%d b:%d c:%d d:%d e:%d", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
 日本杀手

int main()
{
	char k;
	for ( k = 'A'; k <='D'; k++)
	{
		if ((k != 'A') + (k == 'C') + (k =='D')+(k!='D')==3)
		{
			printf("killer is %c", k);
		}
	}
	return 0;
}
杨辉三角
int main()
{
	int n = 0;
	printf("请输入要打印的行数");
	scanf("%d", &n);
	int arr[100][100];
	int i = 0;
	for ( i = 0; i <n; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 0;
	}
	for ( i = 2; i < n; i++)
	{
		int j = 0;
		for ( j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for ( i = 0; i < n; i++)
	{
		int j = 0;
		for ( j = 0; j <i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}