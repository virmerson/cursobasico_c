#include<stdio.h>

void main(){

     //m é a quantidade de casos de teste
    int m,i,n,x;
    scanf("%d",&m);

    i=0;
    int r;

    while(i<m){
        scanf("%d",&x);
        scanf("%d",&n);
        if(n>=0){
            printf("%d\n",mdc(x,n));
        }
        i++;
    }
    return;
}

//ex1: mdc (4,3)  = mdc(3,1)   = mdc (1,0) =1
//ex2: mdc(50,15) = mdc(15, 5) = mdc (5,0) =5
//ex3: mdc (10,3) = mdc(3,1)   = mdc (1,0) =
int mdc(int a, int b){

    //Maximo divisor comun de qualquer numero com 1 sempre será 1
    if(b==0)
        return a;

        return mdc( b, a%b);


}
