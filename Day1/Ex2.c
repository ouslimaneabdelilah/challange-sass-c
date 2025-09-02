#include <stdio.h>
int main(){
    float v;
    float r;
    float const Pi = 3.14;
    // int r = 10; Ex 2
    // v = 4 / 3 * Pi * r *r *r;  //dans cas  4 / 3 utilise la division entière (int / int) = int mais une cas avant change type 4.0f / 3.0f en float alors affectie 1.3333..., 
    printf("Veuillez saisir la valeur de rayon R : ");
    scanf("%f",&r);
    v = 4.0f / 3.0f * Pi * r *r *r;
    printf("le volume de sphère de rayon %f metres est : %.2f L,\n",r,v);
  
    return 0;
}