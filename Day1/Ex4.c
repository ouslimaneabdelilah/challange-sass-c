#include <stdio.h>
// Exercice 4 
int main(){
    float montant,taxe;
    printf("Veuillez Saisir le Montant : ");
    scanf("%f",&montant);
    printf("le montant est %.2f $ \n",montant);
    taxe = (montant/100)*5;
    montant = montant + taxe;
    printf("le montant avec taxe : %.2f \n $",montant);
    return 0;
}