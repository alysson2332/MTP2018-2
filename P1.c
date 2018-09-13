/* P1.c */
/* Alysson Santana de Aragão */ 
/* 11811EAU008 */ 
#include <stdio.h>

int estado;
estado = 0;
int i;
i = 0;
char bits[256];

int main(){
scanf("%s",&bits);

for(i=0; bits[i] != '\0'; i++){
	if(bits[i] == '0' && estado == 0){
		estado = estado;
	}
	else if(bits[i] == '1' && estado == 0){
		estado++;
	}
	else if(bits[i] == '0' && estado == 1){
		estado++;
	}
	else if(bits[i] == '1' && estado == 1){
		estado--;
	}
	else if(bits[i] == '0' && estado == 2){
		estado--;
	}
	else if(bits[i] == '1' && estado == 2){
		estado = estado;
	}
}

printf("%s \n",bits);
if(estado == 0){
	printf("e multiplo de 3");
}
if(estado != 0){
	printf("nao e");
}
return 0;
}
