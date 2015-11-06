#include <stdio.h>
#include <stdlib.h>

int main (){

    float ***M;
    int nAlunos, mDisciplinas, pNotas;

    scanf("%d", nAlunos);
    scanf("%d", mDisciplinas);
    scanf("%d", pNotas);

    M = malloc (nAlunos * sizeof(float **));
    //Alocando
    for (int i=0; i< mDisciplinas; i++){
        m[i] =  malloc (mDisciplinas * sizeof(float *));

        for (int j=0; j<pNotas;j++){
            m[i][j] = malloc(pNotas *sizeof(float));
        }
    }

    //Leitura
    for (int i=0; i<nAlunos; i++ ){

        for (int i=0; i< mDisciplinas; i++){

            for (int i=0; i< pNotas; i++){

            }

        }
    }
}
