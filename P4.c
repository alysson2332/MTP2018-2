/* P4.c */
/* Alysson Santana de Aragão */
/* 11811EAU008 */

#include <stdio.h>

int func(int a, int n);

int main()
{
	int a, n;
	scanf("%d", &a);
	scanf("%d", &n);
	
	printf("\n%d", func(a, n));
	return 0;
}

int func(int a, int n)
{
	if(a == 0)
		return (n + 1);
	else if(a > 0 && n == 0)
		func(a - 1, 1);
	else
		func(a - 1, func(a, n - 1));
}
