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
    int m,n,r;
    printf("Entrez deux entiers : ");
    scanf("%d %d",&m,&n);
    r = gcc(m,n);
    printf("Le plus grand commun diviseur est: %d",r);
    return 0;
}