#include <stdio.h>
int length_int(int num){
    int c = 0;
    if(num == 0) c=1;
    while (num !=0)
    {
        c++;
        num = num/10;
    }
    return c;
    
}
int main(){
    int nombre;
    int length;
    int s = 0;
    while (1)
    {
        printf("Veulliez Saisir le nombre contient 2 : ");
        scanf("%d",&nombre);
        if(length_int(nombre) == 2) break;
        printf("S'il vous plaite entre nombre de deux chiffres\n");

    }
    for (int i = 0; i < 2; i++)
    {
        s = (s * 10) + nombre%10;
        nombre = nombre / 10;
    }
    printf("%d",s);
    

}