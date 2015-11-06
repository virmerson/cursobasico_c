#include <stdio.h>

#include <string.h>


int intComp (int x, int y)
{

    if (x==y) return 1;
    return 0;

}


int main ()
{
    double x,w;  // declara uma variável double
    int z,y;     // delcara uma variável inteira
    double *q;   // declara um ponteiro para double q
    int *p;      // declara um ponteiro para inteiro p

    z = 10;      // inicializa z
    x = 3.5;     // inicializa x

    p = &z;      // p recebe o endereco de z
    q = &x;      // q recebe o endreco de x
    y = *p;      // y recebe valor 10
    w = *q;      // w recebe o valor 3,5

    printf("\nValor da variavel inteira z: %d", z);
    printf("\nValor da variavel ponteiro para inteiro p: %p", p);
    printf("\nValor da variavel ponteiro para double q: %p", q);
    printf("\nValor da variavel inteira apontada por p: %d", *p);
    printf("\nValor da variavel double apontada por q: %f", *q);
    printf("\nValor da variavel inteira y: %d", y);
    printf("\nValor da variavel double w: %f", w);


    p++;
    q++;
    printf("\nValor da variavel ponteiro para inteiro p apos o incremento: %p", p);
    printf("\nValor da variavel ponteiro para double q apos o incremento: %p", q);

    int i;
    int  vetInt[10];
    for (i=0; i<10; i++)
        vetInt[i] = 0;

    int* pointerToVetInt = vetInt;

    vetInt[3]=22;
    pointerToVetInt[3]=23;
    *(pointerToVetInt+3)=24;

    printf("\nElemento de indice 3 do vetor utilizando vetInt: %d", vetInt[3]);
    printf("\nElemento de indice 3 do vetor utilizando pointerToVetInt: %d", pointerToVetInt[3]);
    printf("\nElemento de indice 3 do vetor utilizando aritmetica de ponteiros: %d", *(pointerToVetInt+3) );


    int m = 34;
    int n = 22;

    int (*function)();

    function = intComp;

    if ((*function)(m,n) == 1) printf("\nx=%d e y=%d são iguais",m,n);
    else printf("\nx=%d e y=%d não são iguais",m,n);

}




