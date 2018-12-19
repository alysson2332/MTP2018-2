/* P6.c */
/* Alysson Santana de Aragão */
/* 11811EAU008 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef
    struct ponto{double x,y;}
ponto;

ponto * gerar_pontos(int N) {
    ponto * coordenadas = (ponto *) calloc(N,sizeof(ponto));
    int i;
    for(i = 0; i < N; i++){
        coordenadas[i].x = cos(i*2.0*M_PI/(N-1));
        coordenadas[i].y = sin(i*2.0*M_PI/(N-1));
    }
    return coordenadas;
}

void mostrar_ponto(ponto * p_ini, ponto * p_fim) {
    if(p_ini < p_fim) {
        printf("(%.3lf, %.3lf) ", p_ini->x, p_ini->y);
        mostrar_ponto(p_ini+1, p_fim);
    }
}

int main(){
    unsigned int N;
    ponto *coordenadas;
    printf("Digite o número de pontos: ");
    scanf("%u", &N); getchar();
    coordenadas = gerar_pontos(N);
    mostrar_ponto(coordenadas, coordenadas + N);
    free(coordenadas);
    return 0;
}
