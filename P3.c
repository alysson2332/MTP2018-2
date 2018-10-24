/* P3.c */
/* Alysson Santana de Aragão */
/* 11811EAU008 */

#include <stdio.h>

int main()
{
	char nu[256];
	int i, resultado = 0, potencia = 1;
	scanf("%s", nu);
	for(i = 0; nu[i] != '\0'; i++);
	i--;
	while(i > -1)
	{
		if(nu[i] >= '0' && nu[i] <= '9')
		{
			resultado = resultado + (nu[i] - 48) * potencia;
			i--;
			potencia = potencia * 10;
		}
		else
	{
			i--;
		}
	}
	printf("\n%d", resultado);
}
