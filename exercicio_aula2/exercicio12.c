//Escreva a funcao void maxVector (int v[MAX], int n) que devolve o maior elemento do vetor de n inteiros
//Escreva a funcao void minVector (int v[MAX], int n) que devolve o maior elemento do vetor de n inteiros

#include<stdio.h>
#define MAX 200

int maxVector(int V[MAX], int n){

    if (n==0) return V[n];

    int maxTemp = maxVector(V, n-1); //Descobre o valor do momento

    if (V[n]>maxTemp)return V[n]; //torna o novo Maior

    return maxTemp;
}

int minVector(int V[MAX], int n){
    if(n==0) return V[n];

    int minTemp = minVector(V, n-1);

    if(V[n] <minTemp) return V[n];

    return minTemp;
}

int main(){
    int n,i, val;
    int V[MAX];
    scanf("%d",&n);

    for (i=0; i<n; i++){
        scanf("%d",&val);
        V[i] =val;
    }
    printf("Maximo: %d", maxVector(V,n-1));
    printf("\n Minimo: %d\n\n", minVector(V,n-1));

    return 0;

}
