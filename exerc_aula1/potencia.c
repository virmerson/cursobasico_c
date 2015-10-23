#include <stdio.h>
int main(){
    //m é a quantidade de casos de teste
    int m,i,n,x;
    scanf("%d",&m);

    i=0;
    int r;

    while(i<m){
        scanf("%d",&x);
        scanf("%d",&n);
        if(n>=0){
            printf("%d\n",potR(x,n));
        }
        i++;
    }
    return;
}

int potR(int x, int n){
    if (n==0) return 1;
    return x * potR(x, n-1);
}
