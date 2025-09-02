#include <stdio.h>
int main(){
    int x,p;
    printf("Veuillez Saisir la valeur de X :");
    scanf("%d",&x);
    // p = 3 * (x * x * x * x *x ) + 2 * (x *x*x*x) - 5 * (x * x *x) - (x * x) + 7 * x -6;
    p = ((((3 * x +2)*x-5)*x-1)*x+7)*x-6;
    printf("la valeur du polynôme est : %d",p);
    return 0;

}