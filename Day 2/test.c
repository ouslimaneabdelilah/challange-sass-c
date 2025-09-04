#include <stdio.h>
int main(){
    int num;
    printf("veuillez Saisir le nombre espace : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = i + 1; j >i; j++)
        {
            if(i == 1 || i == num){
                printf("*");
            }else{
                    printf(" ");
                }; 
        }
        
                   
    }
    printf("\n");
   
    
}