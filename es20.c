#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMR 10
#define DIMC 12

int somma(int mat[][DIMC], int dimc, int r){
    int i,somma=0;
    for(i=0;i<dimc;i++)
        somma+=mat[r][i];
    return somma;
}

int main(void){
	srand(time(NULL));
    int mat[DIMR][DIMC],i,j, somma_riga;
    for(i=0;i<DIMR;i++){
        for(j=0;j<DIMC;j++){
            mat[i][j]=rand()%101-50;
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<DIMR;i++){
        somma_riga=somma(mat,DIMC,i);
        printf("Somma riga #%d: %d\n", i+1, somma_riga);
    }


    return 0;
}
