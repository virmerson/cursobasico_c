#include <stdio.h>

//n=4
//r = h(2*4) =h (8)=8,  (2+r)

int h(int n){
    if(n<=0) return 0;
    if(n>4) return n;
    int r = h (2* n);
    return h(2+r);
}

int main (){
    int n;
    scanf("%d",&n);
    printf("%d\n", h(n));
}
