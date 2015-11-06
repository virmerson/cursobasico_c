#include <stdlib.h>
#include <stdio.h>

int main (){

    float *notas, temp;
    int n , i;
    scanf("%d",&n);

    notas = malloc (n *sizeof(float));

    for (i=0;i<n;i++){

        scanf("%f ",&temp);
        notas[i] = temp;
    }

    for (i =0; i<n;i++){
        printf("%f ", notas[i]);
    }

    free(notas);
}
