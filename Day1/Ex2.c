#include <stdio.h>
int main(){
    float v;
    float const Pi = 3.14;
    int r = 10;
    v = 4.0f / 3.0f * Pi * r *r *r;
    // v = 4 / 3 * Pi * r *r *r;  //dans cas  4 / 3 utilise la division entière (int / int) = int mais une cas avant change type 4.0f / 3.0f en float alors affectie 1.3333..., 
    printf("le volume de sphère de rayon %d metres est : %.2f L,\n",r,v);
  
    return 0;
}