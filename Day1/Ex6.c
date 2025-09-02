#include <stdio.h>
int main(){
    int rest,billets_20,billets_10,billets_5,montant;
    printf("Veuillez saisir le montant : ");
    scanf("%d",&montant);
    billets_20 = montant /20;
    rest = montant % 20;
    billets_10 = rest / 10;
    rest = rest % 10;
    billets_5 = rest / 5;
    rest = rest %5;
    printf("Billets de 20$ : %d\n",billets_20);
    printf("Billets de 10$ : %d\n",billets_10);
    printf("Billets de 5$ : %d\n",billets_5);
    printf("Billets de 1$ : %d\n",rest);
    return 0;
}