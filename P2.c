/* P2.c */
/* Alysson Santana de Aragão */
/* 11811EAU008 */

#include <stdio.h>

int main ()
{   int menu, d = 0, i, j, auxiliar;
	char bits[256];
	printf("----- Menu de opcoes -----\n(1) Binario para decimal\n(2) Binario para Hexadecimal\n(3) Hexadecimal para decimal\n(4) Hexadecimal para Binario");
	printf("\n(5) decimal para Binario\n(6) decimal para Hexadecimal\n(7) Octal para decimal\n(8) decimal para Octal\n\n");
	scanf("%i", &menu);
	switch(menu)
	{   case 1:
			printf("\nDigite um binario: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			for(j = 1; i >= 0; i--, j = j * 2)
			{if(bits[i] == '1')
			d = d + j;
			}
			printf("\n%i", d/2);
			break;
		case 2:
			printf("\nDigite um binario: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			for(j = 1; i >= 0; i--, j = j * 2)
			{
				if(bits[i] == '1')
					d = d + j;
			}
			d = d/2;
			for (i = 0, j = 1; j < d; i++, j = j*16);
			j = j/16;
			auxiliar = i;
			bits[i] = '\0';
			i--;
			while(i >= 0)
			{
				if(d % 16 == 0)
					bits[i] = '0';
				else if(d % 16 == 1)
					bits[i] = '1';
				else if(d % 16 == 2)
					bits[i] = '2';
				else if(d % 16 == 3)
					bits[i] = '3';
				else if(d % 16 == 4)
					bits[i] = '4';
				else if(d % 16 == 5)
					bits[i] = '5';
				else if(d % 16 == 6)
					bits[i] = '6';
				else if(d % 16 == 7)
					bits[i] = '7';
				else if(d % 16 == 8)
					bits[i] = '8';
				else if(d % 16 == 9)
					bits[i] = '9';
				else if(d % 16 == 10)
					bits[i] = 'A';
				else if(d % 16 == 11)
					bits[i] = 'B';
				else if(d % 16 == 12)
					bits[i] = 'C';
				else if(d % 16 == 13)
					bits[i] = 'D';
				else if(d % 16 == 14)
					bits[i] = 'E';
				else if(d % 16 == 15)
					bits[i] = 'F';
				d = d/16;
				i--;
				j = j/16;
			}
				printf("\n%s", bits);
			break;
		case 3:
			printf("\nDigite um hexadecimal: ");
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++)
			{
				if (bits[i] == 'A' || bits[i] == 'a')
					bits[i] = 10;
				else if (bits[i] == 'B' || bits[i] == 'b')
					bits[i] = 11;
				else if (bits[i] == 'C' || bits[i] == 'c')
					bits[i] = 12;
				else if (bits[i] == 'D' || bits[i] == 'd')
					bits[i] = 13;
				else if (bits[i] == 'E' || bits[i] == 'e')
					bits[i] = 14;
				else if (bits[i] == 'F' || bits[i] == 'f')
					bits[i] = 15;
				else if (bits[i] == '0')
					bits[i] = 0;
				else if (bits[i] == '1')
					bits[i] = 1;
				else if (bits[i] == '2')
					bits[i] = 2;
				else if (bits[i] == '3')
					bits[i] = 3;
				else if (bits[i] == '4')
					bits[i] = 4;
				else if (bits[i] == '5')
					bits[i] = 5;
				else if (bits[i] == '6')
					bits[i] = 6;
				else if (bits[i] == '7')
					bits[i] = 7;
				else if (bits[i] == '8')
					bits[i] = 8;
				else if (bits[i] == '9')
					bits[i] = 9;	
			}
			i--;
			for(j = 1; i >= 0; i--, j = j * 16)
				d = d + j * bits[i];
			printf("\n%d", d);
			break;
		case 4:
			printf("\nDigite um hexadecimal: ");
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++)
			{
				if (bits[i] == 'A' || bits[i] == 'a')
					bits[i] = 10;
				else if (bits[i] == 'B' || bits[i] == 'b')
					bits[i] = 11;
				else if (bits[i] == 'C' || bits[i] == 'c')
					bits[i] = 12;
				else if (bits[i] == 'D' || bits[i] == 'd')
					bits[i] = 13;
				else if (bits[i] == 'E' || bits[i] == 'e')
					bits[i] = 14;
				else if (bits[i] == 'F' || bits[i] == 'f')
					bits[i] = 15;
				else if (bits[i] == '0')
					bits[i] = 0;
				else if (bits[i] == '1')
					bits[i] = 1;
				else if (bits[i] == '2')
					bits[i] = 2;
				else if (bits[i] == '3')
					bits[i] = 3;
				else if (bits[i] == '4')
					bits[i] = 4;
				else if (bits[i] == '5')
					bits[i] = 5;
				else if (bits[i] == '6')
					bits[i] = 6;
				else if (bits[i] == '7')
					bits[i] = 7;
				else if (bits[i] == '8')
					bits[i] = 8;
				else if (bits[i] == '9')
					bits[i] = 9;	
			}
			i--;
			for(j = 1; i >= 0; i--, j = j * 16)
				d = d + j * bits[i];
			for (i = 0, j = 1; j < d; i++, j = j*2);
			j = j/2;
			auxiliar = i;
			while(i >= 0)
			{
				if(d % 2 == 0)
				bits[i] = 0;
				else
				bits[i] = 1;
				d = d /2;
				i--;
				j = j/2;
			}
			printf("\n");
			for(i = 1; i <= auxiliar; i++)
				printf("%i", bits[i]);
			break;
		case 5:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &d);
			getchar();
			for (i = 0, j = 1; j < d; i++, j = j*2);
			j = j/2;
			auxiliar = i;
			while(i >= 0)
			{
				if(d % 2 == 0)
				bits[i] = 0;
				else
				bits[i] = 1;
				d = d /2;
				i--;
				j = j/2;
			}
			printf("\n");
			for(i = 1; i <= auxiliar; i++)
				printf("%i", bits[i]);
			break;
		case 6:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &d);
			getchar();
			for (i = 0, j = 1; j < d; i++, j = j*16);
			j = j/16;
			auxiliar = i;
			i--;
			while(i >= 0)
			{
				if(d % 16 == 0)
					bits[i] = '0';
				else if(d % 16 == 1)
					bits[i] = '1';
				else if(d % 16 == 2)
					bits[i] = '2';
				else if(d % 16 == 3)
					bits[i] = '3';
				else if(d % 16 == 4)
					bits[i] = '4';
				else if(d % 16 == 5)
					bits[i] = '5';
				else if(d % 16 == 6)
					bits[i] = '6';
				else if(d % 16 == 7)
					bits[i] = '7';
				else if(d % 16 == 8)
					bits[i] = '8';
				else if(d % 16 == 9)
					bits[i] = '9';
				else if(d % 16 == 10)
					bits[i] = 'A';
				else if(d % 16 == 11)
					bits[i] = 'B';
				else if(d % 16 == 12)
					bits[i] = 'C';
				else if(d % 16 == 13)
					bits[i] = 'D';
				else if(d % 16 == 14)
					bits[i] = 'E';
				else if(d % 16 == 15)
					bits[i] = 'F';
				d = d/16;
				i--;
				j = j/16;
			}
				printf("\n%s", bits);
			break;
		case 7:
			printf("\nDigite um octal: ");
			fflush(stdin);
			scanf("%s", bits);
			getchar();
			for(i = 0; bits[i] != '\0'; i++);
			i--;
			for(j = 1; i >= 0; i--, j = j * 8)
				d = d + j * (bits[i] - 48);
			printf("\n%i", d);
			break;
		case 8:
			printf("\nDigite o numero decimal: ");
			scanf("%d", &d);
			getchar();
			for (i = 0, j = 1; j < d; i++, j = j*8);
			j = j/8;
			auxiliar = i;
			while(i >= 0)
			{
				if(d % 8 == 0)
					bits[i] = 0;
				else if(d % 8 == 1)
					bits[i] = 1;
				else if(d % 8 == 2)
					bits[i] = 2;
				else if(d % 8 == 3)
					bits[i] = 3;
				else if(d % 8 == 4)
					bits[i] = 4;
				else if(d % 8 == 5)
					bits[i] = 5;
				else if(d % 8 == 6)
					bits[i] = 6;
				else if(d % 8 == 7)
					bits[i] = 7;
				d = d/8;
				i--;
				j = j/8;
			}
			printf("\n");
			for(i = 1; i <= auxiliar; i++)
				printf("%i", bits[i]);
			break;
		default:
			return 0;}}
