#include <stdio.h>
int main(){
    float montant_pret,taux_entre,paiment_mensuel,taux_mensuel,sold;
    printf("Entrez le montant du pret : ");
    scanf("%f",&montant_pret);
    printf("Entrez le taux d interet : ");
    scanf("%f",&taux_entre);
    printf("Entrez le paiement mensuel : ");
    scanf("%f",&paiment_mensuel);
    taux_mensuel = (taux_entre / 100) /12;
    for (int i = 1; i <= 3; i++)
    {
        sold =(montant_pret - paiment_mensuel) + (montant_pret * taux_mensuel);
        montant_pret = sold;
        printf("Solde restant après le %d paiement : %.2f \n",i,sold);
        
    }
    
    
    return 0;
}