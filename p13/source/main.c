#include <stdio.h>
#include <stdlib.h>

double Power(double x, int n);

int main(void)
{
	int k;
	double answer;

	printf("計算3.5的次方?請輸入k=?");
	scanf_s("%d", &k);
	answer = Power(3.5, k);
	printf("3.5的%d次方=%f\n", k, answer);
	
	system("pause");
	return 0;
}

double Power(double x, int n)
{    
	int i;
	double powerXn = 1;

	for (i = 1; i <= n; i++)
		powerXn = powerXn * x;
	return powerXn;
}