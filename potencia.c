
int main(){

}

int potR(int x, int n){
    if (n==0) return 1;
    return x * potR(x, n-1);
}
