#include <stdio.h>
int gcc(int m,int n){
    int r;
    if(n==0) return r=m;
    while(n!=0){
        r = m % n;
        m=n;
        n=r;
    }

    return m;
}
int main(){
    int m,n,r,dim,num;
    printf("Entrez une fraction : ");
    scanf("%d / %d",&m,&n);
    r = gcc(m,n);
    num = m / r;
    dim = n / r;
    printf("Sous sa forme la plus simple : %d / %d",num,dim);
    return 0;
}