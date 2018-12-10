#include <stdio.h>
#include <stdlib.h>

#define DIMR 10
#define DIMC 12

int somma(int mat[][DIMC], int dimr, int c){
	int i;
	for(i=0;i<dimr-1;i++)
		mat[i][c]+=mat[i+1][c];
}

int main(void){
	int mat[DIMR][DIMC],i,j, somma_riga;
	for(i=0;i<DIMR;i++){
		for(j=0;j<DIMC;j++){
			mat[i][j]=rand()%101-50;
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<DIMC;i++){
		somma_riga=somma(mat,DIMR,i);
		printf("Somma riga #%d: %d\n", i+1, somma_riga);
	}
	
	
	return 0;
}
